Blink library for Arduino.
===================

Hi, this arduino code aggregate allows you to control LED outputs that light up more easily, choosing the times and multiple on and off frequencies.

----------

Getting Started
===============
<i class="icon-file"></i> To start using the library you can open the example code simpleblink or alternatively you can
create a document and paste de follow code.

```c++
#include <blink.h>

// Initialize variable: led(<PIN>,<TIME milliseconds>);
Blink led(13,1000);

void setup() {
  //nothing
}

void loop() {
led.Update(); // Updates state of the output led.
}

```

