#include <ResponsiveAnalogRead.h>
#include <Bounce2.h>

const int channel = 1;          // MIDI channel
const int A_PINS = 8;           // number of Analog PINS
const int D_PINS = 8;           // number of Digital PINS
const int ON_VELOCITY = 99;     // note-on velocity sent from buttons (should be 65 to 127)

const int ANALOG_PINS[A_PINS] = {A0, A1, A2, A3, A4, A5, A6, A7};
const int CCID[A_PINS] = {21, 22, 23, 24, 25, 26, 27, 28};

const int DIGITAL_PINS[D_PINS] = {7, 6, 5, 4, 3, 2, 1, 0};
const int NOTES[D_PINS] = {60, 61, 62, 63, 64, 65, 66, 67};

const int BOUNCE_TIME = 5;  // ms
const int FADER_ZERO = 4;


byte data[A_PINS];
byte control_lag[A_PINS]; // when lag and new are not the same then update MIDI CC value

ResponsiveAnalogRead analog[] =
{
    {ANALOG_PINS[0], true},
    {ANALOG_PINS[1], true},
    {ANALOG_PINS[2], true},
    {ANALOG_PINS[3], true},
    {ANALOG_PINS[4], true},
    {ANALOG_PINS[5], true},
    {ANALOG_PINS[6], true},
    {ANALOG_PINS[7], true},
};

Bounce digital[] =
{
    Bounce(DIGITAL_PINS[0], BOUNCE_TIME),
    Bounce(DIGITAL_PINS[1], BOUNCE_TIME),
    Bounce(DIGITAL_PINS[2], BOUNCE_TIME),
    Bounce(DIGITAL_PINS[3], BOUNCE_TIME),
    Bounce(DIGITAL_PINS[4], BOUNCE_TIME),
    Bounce(DIGITAL_PINS[5], BOUNCE_TIME),
    Bounce(DIGITAL_PINS[6], BOUNCE_TIME),
    Bounce(DIGITAL_PINS[7], BOUNCE_TIME),
};

void setup()
{
    Serial.begin(9600);
    for (int i = 0; i < D_PINS; ++i)
        pinMode(DIGITAL_PINS[i], INPUT_PULLDOWN);
}

void loop()
{
    getAnalogData();
    getDigitalData();
    while (usbMIDI.read()) { /* ignore */ }
}

void getAnalogData()
{
    for (int i = 0; i < A_PINS; ++i)
    {
        analog[i].update();
        if(analog[i].hasChanged())
        {
            data[i] = analog[i].getValue() >> 3;

            // invert and handle fader deadzone
            int control = data[i];
            if (i < 4 && control < FADER_ZERO)
            {
                control = 0;
            }
            control = 127 - control;

            if (control != control_lag[i])
            {
                control_lag[i] = control;
                usbMIDI.sendControlChange(CCID[i], control, channel);
            }
        }
    }
}

void getDigitalData()
{
    for (int i = 0; i < D_PINS; i++)
    {
        digital[i].update();

        if (digital[i].risingEdge())
            usbMIDI.sendNoteOn(NOTES[i], ON_VELOCITY, channel);

        if (digital[i].fallingEdge())
            usbMIDI.sendNoteOff(NOTES[i], 0, channel);
    }
}
