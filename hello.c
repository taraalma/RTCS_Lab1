#include "hello.h"
void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // LEDS ARE COOL
  digitalWrite(LED_BUILTIN, LOW);    // crazy magic stuff
  delay(1000);                       
}

void crazyStuff();

void crazyStuff(){

char mander;

}