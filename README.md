# A Custom MIDI Controller Design

## Mechanical
* Designed in [Onshape Free](https://www.onshape.com/en/products/free)
* 8 beatmania IIDX clone switches w/ LEDs from AliExpress
* 4 rotary potentiometers and 4 slide potentiometers
* Faceplate laser cut on 1/8" 5052 aluminum by [SendCutSend](https://sendcutsend.com/)
* Using aluminum wall mount sign holders with rubber pads as legs

## Electrical
* Based around a [Teensy 3.2](https://www.pjrc.com/store/teensy32.html) because I had one
* Connected via PCB and 18 gauge copper jewelry wire
* Switches wired inline with LEDs to light up when pressed
* PCB designed in [KiCad](https://www.kicad.org/)
* PCB manufactured by [Oshpark](https://oshpark.com/)
* NGE artwork desgined in [Inkscape](https://inkscape.org/)
* Art converted to footprints with [svg2mod](https://github.com/svg2mod/svg2mod)
* Special thanks to [Uri Shaked's Practical Guide to Designing PCB Art](https://blog.wokwi.com/a-practical-guide-to-designing-pcb-art/)

## Software
* Running Arduino
* Using [USB MIDI](https://www.pjrc.com/teensy/td_midi.html#:~:text=When%20you%20select%20%22MIDI%22%20from,3.0%20to%203.6%20are%20supported.)

## Bill of Materials
|Part|Price|
|---|---|
|[PCB](https://oshpark.com/)|$51.65|
|[Laser Cut Aluminum Faceplate](https://sendcutsend.com/)|$39.15|
|[Switch (8x)](https://www.aliexpress.com/item/2251832160522560.html?spm=a2g0o.order_detail.0.0.443df19cTFTVqb&gatewayAdapt=4itemAdapt)|$24.99|
|[Teensy 3.2](https://www.pjrc.com/store/teensy32.html)|$19.80|
|[Aluminum Legs (10x)](https://www.amazon.com/gp/product/B07R1SLTY6/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1)|$13.99|
|[Jewlery Wire (55ft)](https://www.amazon.com/gp/product/B086VH27KM/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1)|$12.99|
|[Slide Potentiometer Screws (10x)](https://www.mcmaster.com/97763A407/)|$8.67|
|[Rotary Potentiometer](https://www.adafruit.com/product/5280)|$7.80 ($1.95 ea)|
|[Slide Potentiometer](https://www.adafruit.com/product/4272)|$7.80 ($1.95 ea)|
|[Rubber Foot Pads (50x)](https://www.amazon.com/dp/B01LDLJF5K?psc=1&ref=ppx_yo2ov_dt_b_product_details)|$7.79|
|[1k Through-hole Resistor (100x)](https://www.amazon.com/dp/B07HDDWFDD?ref=ppx_yo2ov_dt_b_product_details&th=1)|$4.99|
|[Potentiometer Knobs (20x)](https://www.ebay.com/itm/192481232352)|$4.73|
|[Slide Potentiometer Knobs (10x)](https://www.ebay.com/itm/384835783660)|$2.45|
|TOTAL|$206.80 (yikes)|

## Build Notes

Everything went in beautifully. The faceplate only needed a little bit of post-processing with a file and some scotch brite.

<img src=https://user-images.githubusercontent.com/3968357/174227494-75c7efd0-1a9d-4c79-9968-8b448f8a25a3.jpg width=1000>

The rotary potentiometer pins were longer than expected. I extended each slide potentiometer pin with the metal innard of a female pin header so that the PCB will sit parallel to the faceplate.

<img src=https://user-images.githubusercontent.com/3968357/174227724-fe7abd35-aa6b-444a-ba31-e87f9a1bb874.jpg width=500>

The aluminum legs strip easily.

<img src=https://user-images.githubusercontent.com/3968357/174227735-90e30a60-fb7d-4c22-90c3-6f87cf66122b.jpg width=500>

The PCBs look great. There's a few spots where the silkscreen wasn't printed. I knew the fab house would remove silkscreen on top of exposed copper, but it looks like they also remove silkscreen within a small radius around exposed copper. Also, some small lines on the left were left out; I'm not sure how that happened.

<img src=https://user-images.githubusercontent.com/3968357/175648443-2222eb2a-7af6-4e36-8ac1-b9a7dbe4157b.jpg width=700>

The copper wiring was a pain. Removing the coating from the jewelry wire and trying to keep everythiung straight and sized correctly was tedious.

The easiest method I found to remove the coating was scraping with a razor blade. Fun-Tak was useful for securing things while soldering.

I could've benefitted from better modeling of the wiring ahead of time, and I should've used through-hole pads on the PCB for the wire.

In the future I might try to use thicker wire that holds it shape better. Since I still have a bunch of wire left over, I'll probably find a way to strip a large amount of it ahead of time. I think I'll also buy better solder.

<img src=https://user-images.githubusercontent.com/3968357/175838444-0dd81fe0-da31-4dcc-ad0d-67d16ba71546.jpg width=900>

This sketch I found in my notes is pretty much how each switch is wired.

<img src=https://user-images.githubusercontent.com/3968357/175838534-672a5651-38cd-4588-b52f-f91d4a364c2e.jpg width=600>
