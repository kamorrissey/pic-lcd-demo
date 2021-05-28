![LCD demonstration breadboard](assets/images/LCD_Demo.jpg)

# The LCD Demonstration

The PIC LCD driver module demonstration uses a PICLF19156 to display
on a Lumex LCD-S401M16KR 3V LCD the estimated supply voltage (Vdd) of the PIC,
with the display updated each second.
Vdd is estimated by using the ADC module to measure the PIC's 1.024V fixed voltage reference with respect to Vdd
(nominally 3V).

Look at the following files for description of the LCD demonstration:
* PDF of circuit schematic at [Schematic_LCD_Demo.pdf](Schematic_LCD_Demo.pdf)
* KiCad project for customizing the circuit at [kicad/LCD_Demo](kicad/LCD_Demo)
* MPLAB X IDE project containing source code for firmware at [mplabx/LCD_Demo.X](mplabx/LCD_Demo.X)

The Lumex LCD-S401M16KR display has 32 pixels:
4 7-segment numerals, 3 decimal points, and 1 colon.
It achieves this with only 12 leads because it is multiplexed.
There are 4 COM leads and 8 SEG leads (4+8 = 12), yielding 32 COM-SEG pairs (4x8 = 32).
Since there are corresponding COM and SEG pins on the PIC,
only 12 of the PICs 28 pins are needed to drive this display.
Unmultiplexed (called "static") LCDs have 1 SEG lead for each pixel,
requiring at least 33 leads (32 SEGs + 1 COM) to drive the same number of pixels.
