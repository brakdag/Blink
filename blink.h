#ifndef BLINK_H_INCLUDED
#define BLINK_H_INCLUDED

class Blink
{
   public:
   	Blink(int pin, int time);
   	void Update();

   private:
   	int _intervalo;
   	int _pin;
   	int _led_estado;
   	unsigned long _tiempo_anterior;
};

#endif // BLINK_H_INCLUDED
