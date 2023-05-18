#include <Arduino.h> 
#include <RotaryEncoder.h> 
#include <Wire.h> 
#include <Adafruit_GFX.h> 
#include <Adafruit_SSD1306.h>
 

#define PIN_IN1 36 

#define PIN_IN2 39 

 

#define SCREEN_WIDTH 128 // OLED display width, in pixels 

#define SCREEN_HEIGHT 64 // OLED display height, in pixels 

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins) 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, 4); 
 

// Setup a RotaryEncoder with 4 steps per latch for the 2 signal input pins: 

// RotaryEncoder encoder(PIN_IN1, PIN_IN2, RotaryEncoder::LatchMode::FOUR3); 

// Setup a RotaryEncoder with 2 steps per latch for the 2 signal input pins: 

RotaryEncoder encoder(PIN_IN1, PIN_IN2, RotaryEncoder::LatchMode::TWO03); 

 

char *menu[] = {"Eier hart", "Eier weich", "Schweinsbraten", "Rueckentraining"}; 

int anzahl = 4;

void setup() 

{ 
Serial.begin(115200); 

if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
{ // Address 0x3D for 128x64 

Serial.println(F("SSD1306 allocation failed")); 

for(;;); 

} 

delay(2000); 

display.clearDisplay(); 

display.setTextSize(1); 

display.setTextColor(WHITE); 

display.setCursor(0, 10); 

// Display static text 

display.println("Hello, EAV2A."); 

display.display();  

while (! Serial); 

Serial.println("Einfaches Beispie zum RE"); 

} // setup() 

 

// Read the current position of the encoder and print out when changed. 

void loop() 

{ 

static int pos = 0; 

int wahl = 0; 

encoder.tick(); 

int newPos = encoder.getPosition(); 

if (pos != newPos) { 

Serial.print("pos:"); 

Serial.print(newPos); 

Serial.print(" dir:"); 

Serial.println((int)(encoder.getDirection())); 

wahl = newPos % anzahl; 

wahl = wahl < 0 ? -wahl : wahl; 

Serial.println(menu[wahl]); 

Serial.println(newPos); 

pos = newPos; 

} // if 

}