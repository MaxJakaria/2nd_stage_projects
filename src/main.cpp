#include <Arduino.h>

#define digitalPIN_a 15
#define LED_PIN 12
#define analogPIN_LDR 13

void setup()
{
  Serial.begin(115200);

  pinMode(digitalPIN_a, INPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.println("Starting Serial Monitoring of Digital and Analog Pins...");
}

void loop()
{
  int a = digitalRead(digitalPIN_a);
  int LDR = analogRead(analogPIN_LDR);
  if (a == 1)
  {
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    if (LDR > 3000)
    {
      digitalWrite(LED_PIN, LOW);
    }
    else
    {
      digitalWrite(LED_PIN, HIGH);
    }
  }

  Serial.printf("PIN A: %d\n-> LDR: %d\n", a, LDR);
  delay(5000);
}
