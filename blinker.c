#include <Arduino.h> 

 

#define LED 2 

#define SPEED 200 

#define TASTER 4 

 

void setup() { 

  // put your setup code here, to run once: 

  Serial.begin(115200); 

  Serial.println("Start: "); 

  pinMode(LED, OUTPUT); 

  pinMode(TASTER, INPUT); 

} 

 

bool onoff = HIGH; 

int previousMillis = 0; 

int toggle = 1; 

 

 

void loop() { 

  // put your main code here, to run repeatedly: 

  unsigned long currentMillis = millis(); 

 

  if( digitalRead(TASTER) == LOW){ 

    toggle = !toggle; 

    while( digitalRead(TASTER) == LOW){ 

      delay(1); 

    } 

  } 

  if( toggle == 1){ 

 

    if( currentMillis > previousMillis + SPEED){ 

      previousMillis = currentMillis; 

      digitalWrite(LED, onoff); 

      Serial.println("The LED is on"); 

      onoff = !onoff; 

    } 

     

  } 

  else 

  { 

    digitalWrite(LED, LOW); 

  } 

} 