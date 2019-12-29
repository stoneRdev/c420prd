
#ifndef _C420PRD_H
#define _C420PRD_H

#include <Arduino.h>

#define _C420PRD_DEFAULT_PIN 7
#define _C420PRD_DEFAULT_STATE false
#define _C420PRD_RS true
#define _C420PRD_MS false

class C420PRD {
public:
	C420PRD();
	C420PRD(uint8_t pin);
	C420PRD(bool initialState);
	C420PRD(uint8_t pin, bool initialState);
	void init();
	bool getState();
	void toggle();
	void useReserveSupply();
	void useMainSupply();
private:
	void setRelayPin();
	uint8_t pin;
	bool state;
}