// Include RadioHead Amplitude Shift Keying Library
#include <RH_ASK.h>
// Include dependant SPI Library 
#include <SPI.h> 
#include <SoftwareSerial.h>

SoftwareSerial BTserial(10, 9); // RX | TX
 
// Create Amplitude Shift Keying Object
RH_ASK rf_driver;
 
void setup()
{
    // Initialize ASK Object
    rf_driver.init();
    // Setup Serial Monitor
    BTserial.begin(9600);
    Serial.begin(9600);
}
 
void loop()
{
    // Set buffer to size of expected message
    uint8_t buf[11];
    uint8_t buflen = sizeof(buf);
    // Check if received packet is correct size
    if (rf_driver.recv(buf, &buflen))
    {
      
      // Message received with valid checksum
      Serial.print("Message Received: ");
      char a=Serial.println((char*)buf);
      BTserial.print(a);         
    }
}
