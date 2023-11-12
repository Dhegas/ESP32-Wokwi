#include <Arduino.h>

const int LED = 12;

void setup()
{
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop()
{
  int state = digitalRead(LED);
  digitalWrite(LED, !state);
  delay(1000);
}