Blink library for Arduino.
===================

Hi, this arduino code aggregate allows you to control LED outputs that light up more easily, choosing the times and multiple on and off frequencies.

----------

Example code
=============
#### <i class="icon-file"></i> Create a document and paste de follow code.

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

###License

This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation; either version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along with this library; if not, write to the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA