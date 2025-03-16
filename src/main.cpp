#include <Arduino.h>
#define BUILTIN_LED 2
#define RED_LED 13
#define WHITE_LED 12

void setup()
{
  pinMode(BUILTIN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(WHITE_LED, OUTPUT);
}

void loop()
{
  digitalWrite(BUILTIN_LED, HIGH);
  digitalWrite(RED_LED, HIGH);
  delay(150);
  digitalWrite(RED_LED, LOW);
  delay(100);
  digitalWrite(WHITE_LED, HIGH);
  delay(150);
  digitalWrite(WHITE_LED, LOW);
  delay(500);
}