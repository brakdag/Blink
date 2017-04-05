#include <blink.h>

// Initialize variable: led(<PIN>,<TIME milliseconds>);
Blink led(13,1000);

void setup() {
  //nothing
}

void loop() {
led.Update(); // Updates state of the output led.
}

