#define DEBUG

#include <DebugUtil.h>
#include <Arduino.h>

void setup()
{
  //#ifdef DEBUG
  Serial.begin(9600);
  //#endif

  pinMode(LED_BUILTIN, OUTPUT);
}

void blink()
{
  digitalWrite(LED_BUILTIN, HIGH);
  DEB("On");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  DEB("Off");
  delay(1000);
}

void loop()
{
  blink();

  //Serial.println("Cycle complete.");
}