#include <RH_ASK.h>
// Include dependant SPI Library 
#include <SPI.h> 
 int a= 4;
// Create Amplitude Shift Keying Object
RH_ASK rf_driver=7;
 
void setup()
{
    Serial.begin(9600);
    pinMode(a,INPUT_PULLUP);
    // Initialize ASK Object
    rf_driver.init();
}
 
void loop()
{
    if (digitalRead(a)==HIGH){
    const char *msg = "sos";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
    }
}
