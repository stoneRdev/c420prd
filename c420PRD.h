
 
#ifndef _C420PRD_H
#define _C420PRD_H

//#include <Arduino.h>

class C420PRD {
public:
	static volatile uint8_t * PORT = &PORTD;
	static const uint8_t PIN_MASK = B10000000;
	static const uint8_t RESERVE_OR_MASK = B10000000;
	static const uint8_t MAIN_AND_MASK = B01111111;
	static void init();
	static bool isOnMain();
	static void useReserveSupply();
	static void useMainSupply();
}

#endif _C420PRD_H