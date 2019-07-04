#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*7);
}

//∂®“Âa~z
void Morse::T_a()
{
    dot();dash();
}

void Morse::T_b()
{
    dash();dot();dot();dot();
}

void Morse::T_c()
{
    dash();dot();dash();dot();
}

void Morse::T_d()
{
    dash();dot();dot();
}

void Morse::T_e()
{
    dot();
}

void Morse::T_f()
{
    dot();dot();dash();dot();
}

void Morse::T_g()
{
    dash();dash();dot();
}

void Morse::T_h()
{
    dot();dot();dot();dot();
}

void Morse::T_i()
{
    dot();dot();
}

void Morse::T_j()
{
    dot();dash();dash();dash();
}

void Morse::T_k()
{
    dot();dash();dot();
}

void Morse::T_l()
{
    dot();dash();dot();dot();
}

void Morse::T_m()
{
    dash();dash();
}

void Morse::T_n()
{
    dash();dot();
}

void Morse::T_o()
{
    dash();dash();dash();
}

void Morse::T_p()
{
    dot();dash();dash();dot();
}

void Morse::T_q()
{
    dash();dash();dot();dash();
}

void Morse::T_r()
{
    dot();dash();dot();
}

void Morse::T_s()
{
    dot();dot();dot();
}

void Morse::T_t()
{
    dash();
}

void Morse::T_u()
{
    dot();dot();dash();
}

void Morse::T_v()
{
    dot();dot();dot();dash();
}

void Morse::T_w()
{
    dot();dash();dash();
}

void Morse::T_x()
{
    dash();dot();dot();dash();
}

void Morse::T_y()
{
    dash();dot();dash();dash();
}

void Morse::T_z()
{
    dash();dash();dot();dot();
}


