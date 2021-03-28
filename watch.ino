#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 81.48 // OLED display width, in pixels
#define SCREEN_HEIGHT 42.40 // OLED display height, in pixels
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, 1);

void setup() {
  int i=0;
  int j=0;
  int k=0;
  int l=0;
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
  // Display static text
  for(i=0;i<1;i++)
  { delay(36000000);
    for(j=0;j<10;j++)
    { delay(3600000);
     for(k=0;k<6;k++)
     { delay(600000);
      for(l=0;l<10;l++)
      {
        delay(60000);
        display.println(i);
        display.print(j);
        display.print(":");
        display.print(k);
        display.print(l);
        display.print("am");
        display.display();
      }
     }
    }
   }
   
 for(i=1;i<2;i++)
  { delay(7200000);
    for(j=0;j<3;j++)
    { delay(3600000);
     for(k=0;k<6;k++)
     { delay(600000);
      for(l=0;l<10;l++)
      {
        delay(60000);
        display.print(i);
        display.print(j);
        display.print(":");
        display.print(k);
        display.print(l);
        display.print("am");
        display.display();
      }
     }
    }
   }
 for(i=0;i<1;i++)
  { delay(36000000);
    for(j=0;j<10;j++)
    { delay(3600000);
     for(k=0;k<6;k++)
     { delay(600000);
      for(l=0;l<10;l++)
      {
        delay(60000);
        display.println(i);
        display.print(j);
        display.print(":");
        display.print(k);
        display.print(l);
        display.print("pm");
        display.display();
      }
     }
    }
   }
 for(i=1;i<2;i++)
  { delay(7200000);
    for(j=0;j<3;j++)
    { delay(3600000);
     for(k=0;k<6;k++)
     { delay(600000);
      for(l=0;l<10;l++)
      {
        delay(60000);
        display.println(i);
        display.print(j);
        display.print(":");
        display.print(k);
        display.print(l);
        display.print("pm");
        display.display();
      }
     }
    }
   }
 }
void loop() {
  
}
