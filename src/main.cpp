#include <Arduino.h>

int LED1 = 2;
int Power = 7;
int Activated = 4;
int Closed = 0;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(Power, OUTPUT);
  pinMode(Activated, INPUT);
}

void loop() {
  digitalWrite(Power, HIGH);

  Closed = !digitalRead(Activated);

  digitalWrite(LED1, Closed);

  digitalWrite(Power, LOW);
}