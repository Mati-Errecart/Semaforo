#include <Arduino.h>
#define SECONDS(x)x*1000
 // 0-5 pines del digispark
 // 3-4 pines USB
const int red= 0;
const int yellow= 1;
const int green= 2;

void setup() 
{
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);

digitalWrite(red, LOW);
digitalWrite(yellow,LOW);
digitalWrite(green,LOW);


}

void loop() 
{
  // put your main code here, to run repeatedly:
digitalWrite(green, LOW);
digitalWrite(red, HIGH);
delay(SECONDS(10));
digitalWrite(red, LOW);
digitalWrite(yellow, HIGH);
delay(SECONDS(2));
digitalWrite(yellow, LOW);
digitalWrite(green, HIGH);
delay(SECONDS(10));
}