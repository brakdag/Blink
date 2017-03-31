Welcome to blink!
===================


Hi, this arduino code aggregate allows you to control LED outputs that light up more easily, choosing the times and multiple on and off frequencies.

----------

Example code
=============


```
#include <blink.h>

// Initialize variable: led(<PIN>,<TIME milliseconds>);
Blink led(13,1000);

void setup() {
  //nothing is necesary here
}

void loop() {
led.Update(); // Updates state of the output led.
```