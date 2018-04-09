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
Sheet 4 5
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
L 18650 BT1
U 1 1 5AC5616F
P 5750 3500
F 0 "BT1" H 5750 3750 79  0000 C CNN
F 1 "18650" H 5750 3500 79  0000 C CNN
F 2 "18650_SMD:18650_SMD" H 5750 3500 79  0001 C CNN
F 3 "https://www.digikey.com/product-detail/en/keystone-electronics/1042/36-1042-ND/2745668" H 5750 3500 79  0001 C CNN
	1    5750 3500
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR025
U 1 1 5AC561CE
P 6750 3500
F 0 "#PWR025" H 6750 3250 50  0001 C CNN
F 1 "GND" H 6750 3350 50  0000 C CNN
F 2 "" H 6750 3500 50  0001 C CNN
F 3 "" H 6750 3500 50  0001 C CNN
	1    6750 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	6650 3500 6750 3500
Text HLabel 4650 3500 0    79   Output ~ 16
BAT+
Wire Wire Line
	4650 3500 4850 3500
$EndSCHEMATC
