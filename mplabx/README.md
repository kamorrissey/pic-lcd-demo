# MPLAB X IDE Firmware Projects

All firmware in this project is written in C, using Microchip's free version of the MPLAB X IDE ([download](https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-x-ide)).
The Microchip Code Configurator (MCC) is a plug-in of MPLAB used to generate code from configuration GUI forms,
such as MCU initialization and convenience functions.
It was used wherever practical rather than to hand-write code.
The code generated by MCC can be customized or added to.
Subsequent code generated by MCC after making configuration changes will be merged with your code changes.

There are three MPLAB firmware projects here:
* [LCD_Test_Generator_PICLF19156.X](LCD_Test_Generator_PICLF19156.X), to generate a 250Hz AC square wave using a PICLF19156 MCU
* [LCD_Test_Generator_PIC12F1572.X](LCD_Test_Generator_PIC12F1572.X), to generate a 250Hz AC square wave using a smaller, cheaper PIC12F1572 MCU
* [LCD_Test_Generator_PIC12F1572_PWM.X](LCD_Test_Generator_PIC12F1572_PWM.X), to generate a 250Hz AC square wave using the pulse width modulation peripheral of a PIC12F1572 MCU
* [LCD_Demo_PIC16LF19156.X](LCD_Demo_PIC16LF19156.X), to demonstrate driving an LCD segment display using a PIC16LF19156 MCU

To open any of these projects , open the respective \*.X directory in MPLAB X IDE.
