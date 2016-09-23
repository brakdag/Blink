#include "Arduino.h"
#include "blink.h"

Blink::Blink (int pin,int time)
{
	_led_estado =LOW;
	pinMode(pin,OUTPUT);
	_intervalo = time;
	_pin = pin;

}

void Blink::Update(void){
unsigned long tiempo = millis();

if (tiempo > (_tiempo_anterior+_intervalo))
{
	_tiempo_anterior = tiempo;

	digitalWrite(_pin,!digitalRead(_pin));

}

}
