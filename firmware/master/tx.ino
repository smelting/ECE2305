// transmitter.pde
//
// Simple example of how to use VirtualWire to transmit messages
// Implements a simplex (one-way) transmitter with an TX-C1 module
//
// See VirtualWire.h for detailed API docs
// Author: Mike McCauley (mikem@airspayce.com)
// Copyright (C) 2008 Mike McCauley
// $Id: transmitter.pde,v 1.3 2009/03/30 00:07:24 mikem Exp $

#include <VirtualWire.h>

const int led_pin = 13;
const int transmit_pin = 5;
const int receive_pin = 3;
const int transmit_en_pin = 13;

unsigned long timeTX = millis();

void setup()
{
    Serial.begin(9600);
    // Initialise the IO and ISR
    vw_set_tx_pin(transmit_pin);
    vw_set_rx_pin(receive_pin);
    vw_set_ptt_pin(transmit_en_pin);
    vw_set_ptt_inverted(true); // Required for DR3100
    vw_setup(1000);       // Bits per sec
    pinMode(led_pin, OUTPUT);
    vw_rx_start();
}

byte count = 1;

void loop()
{
  if(millis() - timeTX > 1000){
    Serial.println("transmitting");
    char msg[5] = {0x01,0x05,0x00,0x11,0x33};
  
    //msg[6] = count;
    digitalWrite(led_pin, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg, 5);
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(led_pin, LOW);
    count = count + 1;
    timeTX = millis();
  }

    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;

    if (vw_get_message(buf, &buflen)) // Non-blocking
    {
        int i;
      
              digitalWrite(led_pin, HIGH); // Flash a light to show received good message
        // Message with a good checksum received, dump it.
        Serial.print("Got: ");
        
        for (i = 0; i < buflen; i++)
        {
            Serial.print(buf[i], HEX);
            Serial.print(' ');
        }
        Serial.println();
        digitalWrite(led_pin, LOW);
    }
}.