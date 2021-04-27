# pic-lcd-demo

(This project is still being set up. Don't count on anything in it yet.)

Demonstration of driving a multiplexed LCD segment display using the LCD module of a PIC16LF19156 MCU.

# Introduction

In 2020, I helped a non-profit design a non-contact IR fever thermometer. Several design proposals were submitted. Mine, which was not selected, had two characteristics making it different from the others. I specified a PIC MCU and an LCD display; the others specified Arduino campatible MCUs and LCD displays. I picked an LCD for low power consumption and high visibility in good to bright lighting, such as at a business. I decided to build a working prototype of my design, and this project was a stepping stone to getting there. I decided to document this stepping stone because I could find precious little on the internet about programming the Microchip built-in LCD segment driver module.

LCD segment displays are much more complicated to drive than LED displays,
because LCDs are driven by AC signals only.
They are damaged if a long-term DC bias is applied to them.
Microchip simplifies LCD circuit design by building LCD driver circuits into many of their PIC MCUs.
The PIC LCD module in some PICs also provides a regulated charge pump that can be used for LCD bias.
The regulated charge pump is both step-up and step-down.

This project demonstrates a minimal circuit and software driving a 3V, multiplexed, 12-pin, LCD segment display (Lumex LCD-S401M16KR)
with a 28-pin DIP Microchip PIC16LF19156 MCU operating at 1.8-3.6V.

# Hardware

I chose a PICLF19156 for several reasons. It is a 28-pin DIP suitable for breadboarding and hand soldering. It is both narrower and smaller than the 40-pin DIP PIC16F19176 that I originally considered. The LF chips are lower-power than the F chips, with the PIC16LF19156 operating at 1.8-3.6V while able to provide a steady 3V bias for the LCD via the built-in charge pump.

The hardware design in as minimal as I could make it. The MCUs internal oscillators are used, eliminating the need for external crystals. The design is low-power, with the optional LED being the biggest current draw. There are enough spare pins for a couple of switches and an I2C/IIC/SMBus interface.

The circuit includes a 6-pin header for programming in circuit with a PIC ICSP programmer. I used a Pickit 4. There may be cheaper alternatives.

A KiCad project for the hardware is included.

# Software 

The demonstration software is in C, using the free Microchip MPLAB IDE.
The MPLAB project is included.

