EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:Arduino_Nano-cache
LIBS:texas_charge
LIBS:texas_dcdc
LIBS:18650
LIBS:temp_sensors
LIBS:node-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 5
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L tps61230A U3
U 1 1 5AC51DC2
P 5650 3200
F 0 "U3" H 5650 3650 79  0000 C CNN
F 1 "tps61230A" H 5700 2750 79  0000 C CNN
F 2 "VQFN:VQFN(7)(2x2mm)" H 5650 3200 79  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/tps61230a.pdf" H 5650 3200 79  0001 C CNN
	1    5650 3200
	1    0    0    -1  
$EndComp
$Comp
L L L2
U 1 1 5AC51E26
P 4450 2900
F 0 "L2" V 4400 2900 50  0000 C CNN
F 1 "1uH" V 4525 2900 50  0000 C CNN
F 2 "EATON_Inductors:DR73" H 4450 2900 50  0001 C CNN
F 3 "http://www.cooperindustries.com/content/dam/public/bussmann/Electronics/Resources/product-datasheets/Bus_Elx_DS_4315_DR_Series.pdf" H 4450 2900 50  0001 C CNN
	1    4450 2900
	0    -1   -1   0   
$EndComp
$Comp
L C C8
U 1 1 5AC51E8F
P 4700 3050
F 0 "C8" H 4725 3150 50  0000 L CNN
F 1 "10nF" H 4725 2950 50  0000 L CNN
F 2 "Capacitors_SMD:C_0603" H 4738 2900 50  0001 C CNN
F 3 "" H 4700 3050 50  0001 C CNN
	1    4700 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 3200 4950 3200
Wire Wire Line
	4950 3200 4950 3100
Wire Wire Line
	4950 3100 5100 3100
Wire Wire Line
	4600 2900 5100 2900
Connection ~ 4700 2900
Text HLabel 3950 2900 0    79   Input ~ 16
VIN
Wire Wire Line
	3950 2900 4300 2900
$Comp
L C C7
U 1 1 5AC51FE6
P 4150 3100
F 0 "C7" H 4175 3200 50  0000 L CNN
F 1 "10uF" H 4175 3000 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805" H 4188 2950 50  0001 C CNN
F 3 "" H 4150 3100 50  0001 C CNN
	1    4150 3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	4150 2950 4150 2900
Connection ~ 4150 2900
$Comp
L GND #PWR020
U 1 1 5AC52015
P 4150 3250
F 0 "#PWR020" H 4150 3000 50  0001 C CNN
F 1 "GND" H 4150 3100 50  0000 C CNN
F 2 "" H 4150 3250 50  0001 C CNN
F 3 "" H 4150 3250 50  0001 C CNN
	1    4150 3250
	1    0    0    -1  
$EndComp
Text HLabel 4900 3300 0    79   Input ~ 16
VIN
Wire Wire Line
	4900 3300 5100 3300
Wire Wire Line
	5100 3500 5000 3500
Wire Wire Line
	5000 3500 5000 3300
Connection ~ 5000 3300
$Comp
L GND #PWR021
U 1 1 5AC5232B
P 6300 3500
F 0 "#PWR021" H 6300 3250 50  0001 C CNN
F 1 "GND" H 6300 3350 50  0000 C CNN
F 2 "" H 6300 3500 50  0001 C CNN
F 3 "" H 6300 3500 50  0001 C CNN
	1    6300 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	6200 3500 6300 3500
$Comp
L R R5
U 1 1 5AC52366
P 6700 3050
F 0 "R5" V 6780 3050 50  0000 C CNN
F 1 "316k" V 6700 3050 50  0000 C CNN
F 2 "Resistors_SMD:R_0603" V 6630 3050 50  0001 C CNN
F 3 "" H 6700 3050 50  0001 C CNN
	1    6700 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	6200 2900 7600 2900
Wire Wire Line
	6700 3200 6200 3200
$Comp
L R R6
U 1 1 5AC524ED
P 6700 3400
F 0 "R6" V 6780 3400 50  0000 C CNN
F 1 "100k" V 6700 3400 50  0000 C CNN
F 2 "Resistors_SMD:R_0603" V 6630 3400 50  0001 C CNN
F 3 "" H 6700 3400 50  0001 C CNN
	1    6700 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	6700 3250 6700 3200
Connection ~ 6700 3200
Connection ~ 6700 2900
$Comp
L C C9
U 1 1 5AC52788
P 7050 3050
F 0 "C9" H 7075 3150 50  0000 L CNN
F 1 "22uF" H 7075 2950 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805" H 7088 2900 50  0001 C CNN
F 3 "" H 7050 3050 50  0001 C CNN
	1    7050 3050
	1    0    0    -1  
$EndComp
$Comp
L C C10
U 1 1 5AC527BD
P 7300 3050
F 0 "C10" H 7325 3150 50  0000 L CNN
F 1 "22uF" H 7325 2950 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805" H 7338 2900 50  0001 C CNN
F 3 "" H 7300 3050 50  0001 C CNN
	1    7300 3050
	1    0    0    -1  
$EndComp
Connection ~ 7050 2900
Text HLabel 7600 2900 2    79   Output ~ 16
VOUT
Connection ~ 7300 2900
$Comp
L GND #PWR022
U 1 1 5AC52A9A
P 6700 3550
F 0 "#PWR022" H 6700 3300 50  0001 C CNN
F 1 "GND" H 6700 3400 50  0000 C CNN
F 2 "" H 6700 3550 50  0001 C CNN
F 3 "" H 6700 3550 50  0001 C CNN
	1    6700 3550
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR023
U 1 1 5AC52ABD
P 7050 3200
F 0 "#PWR023" H 7050 2950 50  0001 C CNN
F 1 "GND" H 7050 3050 50  0000 C CNN
F 2 "" H 7050 3200 50  0001 C CNN
F 3 "" H 7050 3200 50  0001 C CNN
	1    7050 3200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR024
U 1 1 5AC52AE0
P 7300 3200
F 0 "#PWR024" H 7300 2950 50  0001 C CNN
F 1 "GND" H 7300 3050 50  0000 C CNN
F 2 "" H 7300 3200 50  0001 C CNN
F 3 "" H 7300 3200 50  0001 C CNN
	1    7300 3200
	1    0    0    -1  
$EndComp
Text Notes 5200 2650 0    79   ~ 16
5 Volt Boost Converter
$EndSCHEMATC
