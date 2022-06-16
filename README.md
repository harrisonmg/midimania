# A Custom MIDI Controller Design

## Mechanical
* Designed in [Onshape Free](https://www.onshape.com/en/products/free)
* 8 Beatmania IIDX clone switches w/ LEDs from AliExpress
* 4 potentiometers and 4 slide potentiometers
* Faceplate laser cut on 1/8" 5052 aluminum by [SendCutSend](https://sendcutsend.com/)
* Using aluminum wall mount sign holders with rubber pads as feet

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
* Potentiometers debouncing methods found in [this PJRC thread](https://forum.pjrc.com/threads/34641-Potentiometer-Debouncing-Revisited)

## Bill of Materials
|Part|Price|
|---|---|
|[PCB](https://oshpark.com/)|$51.65|
|[Laser Cut Aluminum Faceplate](https://sendcutsend.com/)|$39.15|
|[Switch (8x)](https://www.aliexpress.com/item/2251832160522560.html?spm=a2g0o.order_detail.0.0.443df19cTFTVqb&gatewayAdapt=4itemAdapt)|$24.99|
|[Teensy 3.2](https://www.pjrc.com/store/teensy32.html)|$19.80|
|[Aluminum Feet (10x)](https://www.amazon.com/gp/product/B07R1SLTY6/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1)|$13.99|
|[Jewlery Wire (55ft)](https://www.amazon.com/gp/product/B086VH27KM/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1)|$12.99|
|[Slide Potentiometer Screws](https://www.mcmaster.com/97763A407/)|$8.67|
|[Potentiometer](https://www.adafruit.com/product/5280)|$7.80 ($1.95 ea)|
|[Slide Potentiometer](https://www.adafruit.com/product/4272)|$7.80 ($1.95 ea)|
|[Rubber Foot Pads (50x)](https://www.amazon.com/dp/B01LDLJF5K?psc=1&ref=ppx_yo2ov_dt_b_product_details)|$7.79|
|[1k Through-hole Resistor (100x)](https://www.amazon.com/dp/B07HDDWFDD?ref=ppx_yo2ov_dt_b_product_details&th=1)|$4.99|
|[Potentiometer Knobs (20x)](https://www.ebay.com/itm/192481232352)|$4.73|
|[Slide Potentiometer Knobs (10x)](https://www.ebay.com/itm/384835783660)|$2.45|
|TOTAL|$206.80 (yikes)|
