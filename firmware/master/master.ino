<<<<<<< HEAD
#include <Wire.h>
#include <OneWire.h>
#include "bq25601.h"


Oneire  ds(8);


void setup() {
	Serial.begin(9600);
	while (!Serial) {}
	Serial.println("Starting up!");
	pinMode(2,INPUT_PULLUP);
	pinMode(7,OUTPUT);
	Wire.begin();
	Wire.beginTransmission(BQ25601_ADDR);
	Wire.write(REG01);
	Wire.write((1 << WD_RST) | (1 << CHG_CONFIG) | (1 << SYS_MIN_0) | (1 << SYS_MIN_2));
	Wire.endTransmission();
	Wire.write(REG05);
	Wire.write((0 << WATCHDOG_1) | (0 << WATCHDOG_0) | (1 << EN_TERM) | (1 << EN_TIMER) | (1 << CHG_TIMER) | (1 << TREG) | (1 << JEITA_ISET));
	Wire.endTransmission();
	Serial.println(readReg(REG0B));
	setCharge(true);
}

void loop() {
	float temp = getTempC();
	Serial.print("Temp C: ");
	Serial.println(temp);
	temp = getTempC();
}


void writeReg(uint8_t reg, uint8_t data) {
	Wire.beginTransmission(BQ25601_ADDR);
	Wire.write(reg);
	Wire.write(data);
	Wire.endTransmission();
}

uint8_t readReg(uint8_t reg) {
	Wire.beginTransmission(BQ25601_ADDR);
	Wire.write(reg);
	Wire.endTransmission();
	Wire.requestFrom(BQ25601_ADDR, 1);
	uint8_t data = 69;
	unsigned long timeout = millis();
	while (Wire.available() && (millis() - timeout < 300))
	{
		data = Wire.read();
	}
	if (millis() - timeout > 300)
	{
		Serial.printf("READING ADDRESS %d timed out!\n", BQ25601_ADDR);
	}
	return data;
=======
#include <OneWire.h>

OneWire  ds(8);

void setup(){
Serial.begin(9600);
}

void loop(){
	Serial.print("temp: ");
  Serial.println(getTempC());
>>>>>>> e7e8e261e81726676bb402604d81b98e0782fb41
}

float getTempC() {
	byte i;
	byte present = 0;
	byte type_s;
	byte data[12];
	byte addr[8];
	float temp;
	if ( !ds.search(addr)) {
		ds.reset_search();
		return;
	}

	ds.reset();
	ds.select(addr);
	ds.write(0x44, 1);        // start conversion, with parasite power on at the end

	delay(750);     // maybe 750ms is enough, maybe not
	// we might do a ds.depower() here, but the reset will take care of it.

	present = ds.reset();
	ds.select(addr);
	ds.write(0xBE);         // Read Scratchpad

	for ( i = 0; i < 9; i++) {           // we need 9 bytes
		data[i] = ds.read();
		//Serial.print(data[i], HEX);
		//Serial.print(" ");
	}

	// Convert the data to actual temperature
	// because the result is a 16 bit signed integer, it should
	// be stored to an "int16_t" type, which is always 16 bits
	// even when compiled on a 32 bit processor.
	int16_t raw = (data[1] << 8) | data[0];
	if (type_s) {
		raw = raw << 3; // 9 bit resolution default
		if (data[7] == 0x10) {
			// "count remain" gives full 12 bit resolution
			raw = (raw & 0xFFF0) + 12 - data[6];
		}
	} else {
		byte cfg = (data[4] & 0x60);
		// at lower res, the low bits are undefined, so let's zero them
		if (cfg == 0x00) raw = raw & ~7;  // 9 bit resolution, 93.75 ms
		else if (cfg == 0x20) raw = raw & ~3; // 10 bit res, 187.5 ms
		else if (cfg == 0x40) raw = raw & ~1; // 11 bit res, 375 ms
		//// default is 12 bit resolution, 750 ms conversion time
	}
	temp = (float)raw / 16.0;
	return temp;
}

<<<<<<< HEAD
void setCharge(boolean charge){
	if(charge){
		digitalWrite(7,LOW);
	}else{
		digitalWrite(7,HIGH);
	}
}
=======


float getTempC(){
	byte i;
  	byte present = 0;
  	byte type_s;
  	byte data[12];
	byte addr[8];
	float celsius;
	if ( !ds.search(addr)) {
	ds.reset_search();
	delay(250);
	}

	ds.reset();
	ds.select(addr);
	ds.write(0x44, 1);        // start conversion, with parasite power on at the end

	delay(750);     // maybe 750ms is enough, maybe not
	// we might do a ds.depower() here, but the reset will take care of it.

	present = ds.reset();
	ds.select(addr);    
	ds.write(0xBE);         // Read Scratchpad

	for ( i = 0; i < 9; i++) {           // we need 9 bytes
	data[i] = ds.read();
	}

	// Convert the data to actual temperature
	// because the result is a 16 bit signed integer, it should
	// be stored to an "int16_t" type, which is always 16 bits
	// even when compiled on a 32 bit processor.
	int16_t raw = (data[1] << 8) | data[0];
	if (type_s) {
	raw = raw << 3; // 9 bit resolution default
	if (data[7] == 0x10) {
	  // "count remain" gives full 12 bit resolution
	  raw = (raw & 0xFFF0) + 12 - data[6];
	}
	} else {
	byte cfg = (data[4] & 0x60);
	// at lower res, the low bits are undefined, so let's zero them
	if (cfg == 0x00) raw = raw & ~7;  // 9 bit resolution, 93.75 ms
	else if (cfg == 0x20) raw = raw & ~3; // 10 bit res, 187.5 ms
	else if (cfg == 0x40) raw = raw & ~1; // 11 bit res, 375 ms
	//// default is 12 bit resolution, 750 ms conversion time
	}
	celsius = (float)raw / 16.0;
	return celsius;
}
>>>>>>> e7e8e261e81726676bb402604d81b98e0782fb41
