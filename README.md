# pic-lcd-demo
Demonstration of driving a multiplexed LCD segment display using the LCD module of a PIC16LF19156 MCU.

LCD segment displays are much more complicated to drive than LED displays,
because LCDs are driven by AC signals only.
They are damaged if a long-term DC bias is applied to them.
Microchip simplifies LCD circuit design by building LCD driver circuits into many of their PIC MCUs.
The PIC LCD module in some PICs also provides a regulated charge pump that can be used for LCD bias.
The regulated charge pump is both step-up and step-down.

This project demonstrates a minimal circuit and software driving a 3V, multiplexed, 12-pin, LCD segment display (Lumex LCD-S401M16KR)
with a 28-pin DIP PIC16LF19156 MCU operating at 1.8-3.6V.
The PIC's internal charge pump is used.
The demonstration hardware can be breadboarded.
A KiCad project for the hardware is included.
The demonstration software is in C, using the Microchip MPLAB IDE.
The MPLAB project is included.
