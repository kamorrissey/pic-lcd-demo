EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr USLetter 11000 8500
encoding utf-8
Sheet 1 1
Title "LCD Test Signal Generator"
Date "2021-04-28"
Rev "REV1"
Comp "Karen A Morrissey"
Comment1 "Generates a 250Hz square wave suitable for testing 3V LED chips"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L LCD_Test_Generator-rescue:PIC16LF19156-I_SP-PIC16LF19156-I_SP IC1
U 1 1 6089B9A8
P 4650 2850
F 0 "IC1" H 5850 3115 50  0000 C CNN
F 1 "PIC16LF19156-I_SP" H 5850 3024 50  0000 C CNN
F 2 "Package_DIP:DIP-28_W7.62mm" H 6900 2950 50  0001 L CNN
F 3 "https://componentsearchengine.com/Datasheets/1/PIC16LF19156-I_SP.pdf" H 6900 2850 50  0001 L CNN
F 4 "8-bit Microcontrollers - MCU 28KB Flash, 2KB RAM, 256KB EE, LCD, 12-bit ADC2, DAC, LP COMP, PWM, CCP, CWG, SMT, ZCD, PPS, RTCC, HLT, WWDT, PMD" H 6900 2750 50  0001 L CNN "Description"
F 5 "5.08" H 6900 2650 50  0001 L CNN "Height"
F 6 "Microchip" H 6900 2550 50  0001 L CNN "Manufacturer_Name"
F 7 "PIC16LF19156-I/SP" H 6900 2450 50  0001 L CNN "Manufacturer_Part_Number"
F 8 "579-PIC16LF19156-ISP" H 6900 2350 50  0001 L CNN "Mouser Part Number"
F 9 "https://www.mouser.com/Search/Refine.aspx?Keyword=579-PIC16LF19156-ISP" H 6900 2250 50  0001 L CNN "Mouser Price/Stock"
F 10 "PIC16LF19156-I/SP" H 6900 2150 50  0001 L CNN "Arrow Part Number"
F 11 "https://www.arrow.com/en/products/pic16lf19156-isp/microchip-technology" H 6900 2050 50  0001 L CNN "Arrow Price/Stock"
	1    4650 2850
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x06_Male J1
U 1 1 6089D55B
P 3400 2250
F 0 "J1" H 3508 2631 50  0000 C CNN
F 1 "ICSP" H 3508 2540 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical" H 3400 2250 50  0001 C CNN
F 3 "~" H 3400 2250 50  0001 C CNN
	1    3400 2250
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x02_Male J2
U 1 1 608A01B1
P 3100 3850
F 0 "J2" H 2992 4035 50  0000 C CNN
F 1 "LCD Signal Output" H 2992 3944 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x01_P2.54mm_Vertical" H 3100 3850 50  0001 C CNN
F 3 "~" H 3100 3850 50  0001 C CNN
	1    3100 3850
	1    0    0    -1  
$EndComp
$Comp
L Device:C C1
U 1 1 608A1A8F
P 3800 3850
F 0 "C1" V 3548 3850 50  0000 C CNN
F 1 "100nF" V 3639 3850 50  0000 C CNN
F 2 "Capacitor_THT:C_Disc_D5.0mm_W2.5mm_P2.50mm" H 3838 3700 50  0001 C CNN
F 3 "~" H 3800 3850 50  0001 C CNN
	1    3800 3850
	0    1    1    0   
$EndComp
$Comp
L Device:C C2
U 1 1 608A22FF
P 7450 3800
F 0 "C2" H 7565 3846 50  0000 L CNN
F 1 "100nF" H 7565 3755 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D5.0mm_W2.5mm_P2.50mm" H 7488 3650 50  0001 C CNN
F 3 "~" H 7450 3800 50  0001 C CNN
	1    7450 3800
	1    0    0    -1  
$EndComp
Wire Wire Line
	7050 3750 7150 3750
Wire Wire Line
	7150 3750 7150 3950
$Comp
L power:+3V0 #PWR03
U 1 1 608A3673
P 7800 3250
F 0 "#PWR03" H 7800 3100 50  0001 C CNN
F 1 "+3V0" H 7815 3423 50  0000 C CNN
F 2 "" H 7800 3250 50  0001 C CNN
F 3 "" H 7800 3250 50  0001 C CNN
	1    7800 3250
	1    0    0    -1  
$EndComp
$Comp
L power:+3V0 #PWR01
U 1 1 608A3844
P 4050 1600
F 0 "#PWR01" H 4050 1450 50  0001 C CNN
F 1 "+3V0" H 4065 1773 50  0000 C CNN
F 2 "" H 4050 1600 50  0001 C CNN
F 3 "" H 4050 1600 50  0001 C CNN
	1    4050 1600
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR02
U 1 1 608A39F4
P 4050 2750
F 0 "#PWR02" H 4050 2500 50  0001 C CNN
F 1 "GND" H 4055 2577 50  0000 C CNN
F 2 "" H 4050 2750 50  0001 C CNN
F 3 "" H 4050 2750 50  0001 C CNN
	1    4050 2750
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR04
U 1 1 608A3BB1
P 7800 4300
F 0 "#PWR04" H 7800 4050 50  0001 C CNN
F 1 "GND" H 7805 4127 50  0000 C CNN
F 2 "" H 7800 4300 50  0001 C CNN
F 3 "" H 7800 4300 50  0001 C CNN
	1    7800 4300
	1    0    0    -1  
$EndComp
Text Label 7050 2850 0    50   ~ 0
ICSP_DAT
Text Label 7050 2950 0    50   ~ 0
ICSP_CLK
Text Label 4650 2850 2    50   ~ 0
ICSP_VPP
Text Label 3600 2050 0    50   ~ 0
ICSP_VPP
Text Label 3600 2350 0    50   ~ 0
ICSP_DAT
Text Label 3600 2450 0    50   ~ 0
ICSP_CLK
Wire Wire Line
	7800 3650 7800 3250
Wire Wire Line
	7800 3950 7800 4300
Wire Wire Line
	3650 3850 3300 3850
Wire Wire Line
	4650 3950 4500 3950
Wire Wire Line
	4500 3950 4500 4050
Wire Wire Line
	3550 4050 3550 3950
Wire Wire Line
	3550 3950 3300 3950
Wire Wire Line
	3600 2250 4050 2250
Wire Wire Line
	4050 2250 4050 2750
Wire Wire Line
	3600 2150 4050 2150
Wire Wire Line
	4050 2150 4050 1600
Wire Wire Line
	7150 3950 7450 3950
Wire Wire Line
	7050 3650 7450 3650
Connection ~ 7450 3650
Wire Wire Line
	7450 3650 7800 3650
Connection ~ 7450 3950
Wire Wire Line
	7450 3950 7800 3950
NoConn ~ 3600 2550
NoConn ~ 4650 2950
NoConn ~ 4650 3050
NoConn ~ 4650 3150
NoConn ~ 4650 3250
NoConn ~ 4650 3350
NoConn ~ 4650 3450
NoConn ~ 4650 3650
NoConn ~ 4650 3750
NoConn ~ 4650 4050
NoConn ~ 4650 4150
NoConn ~ 7050 4150
NoConn ~ 7050 4050
NoConn ~ 7050 3950
NoConn ~ 7050 3850
NoConn ~ 7050 3550
NoConn ~ 7050 3450
NoConn ~ 7050 3350
NoConn ~ 7050 3250
NoConn ~ 7050 3150
NoConn ~ 7050 3050
$Comp
L power:GND #PWR0101
U 1 1 608B067C
P 4400 3550
F 0 "#PWR0101" H 4400 3300 50  0001 C CNN
F 1 "GND" H 4405 3377 50  0000 C CNN
F 2 "" H 4400 3550 50  0001 C CNN
F 3 "" H 4400 3550 50  0001 C CNN
	1    4400 3550
	1    0    0    -1  
$EndComp
Wire Wire Line
	4650 3550 4400 3550
Wire Wire Line
	3950 3850 4650 3850
Wire Wire Line
	3550 4050 4500 4050
$Comp
L Device:Battery BT1
U 1 1 608C7AA0
P 4100 5150
F 0 "BT1" H 4208 5196 50  0000 L CNN
F 1 "3V" H 4208 5105 50  0000 L CNN
F 2 "" V 4100 5210 50  0001 C CNN
F 3 "~" V 4100 5210 50  0001 C CNN
	1    4100 5150
	1    0    0    -1  
$EndComp
$Comp
L power:+3V0 #PWR05
U 1 1 608C7E17
P 4100 4750
F 0 "#PWR05" H 4100 4600 50  0001 C CNN
F 1 "+3V0" H 4115 4923 50  0000 C CNN
F 2 "" H 4100 4750 50  0001 C CNN
F 3 "" H 4100 4750 50  0001 C CNN
	1    4100 4750
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR06
U 1 1 608C80BB
P 4100 5500
F 0 "#PWR06" H 4100 5250 50  0001 C CNN
F 1 "GND" H 4105 5327 50  0000 C CNN
F 2 "" H 4100 5500 50  0001 C CNN
F 3 "" H 4100 5500 50  0001 C CNN
	1    4100 5500
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG?
U 1 1 608C8871
P 4100 4950
F 0 "#FLG?" H 4100 5025 50  0001 C CNN
F 1 "PWR_FLAG" V 4100 5077 50  0000 L CNN
F 2 "" H 4100 4950 50  0001 C CNN
F 3 "~" H 4100 4950 50  0001 C CNN
	1    4100 4950
	0    -1   -1   0   
$EndComp
Connection ~ 4100 4950
$Comp
L power:PWR_FLAG #FLG?
U 1 1 608C8BBB
P 4100 5350
F 0 "#FLG?" H 4100 5425 50  0001 C CNN
F 1 "PWR_FLAG" V 4100 5477 50  0000 L CNN
F 2 "" H 4100 5350 50  0001 C CNN
F 3 "~" H 4100 5350 50  0001 C CNN
	1    4100 5350
	0    -1   -1   0   
$EndComp
Text Notes 4500 5300 0    50   ~ 0
Supply can be 5V for LCDs of that voltage\nif a PIC model of the right voltage is used,\nsuch as the PIC16F19156.\nNote the F and LF difference in the model name.\nThe LF part is lower voltage than the F part.
Text Notes 4950 2350 0    50   ~ 0
I use the PICLF19156 here because I had some on hand.\nAlmost any PIC with 2 free GP output lines will work.\n
Wire Wire Line
	4100 4750 4100 4950
Wire Wire Line
	4100 5350 4100 5500
Connection ~ 4100 5350
Text Notes 3350 3500 0    50   ~ 0
C1 blocks DC,\nwhich would damage LCD.
$EndSCHEMATC
