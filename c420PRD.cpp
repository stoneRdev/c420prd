#include <c420PRD.h>

C420PRD::C420PRD() {
	pin = _C420PRD_DEFAULT_PIN;
	state = _C420PRD_DEFAULT_STATE;
}

C420PRD::C420PRD(uint8_t pin) {
	pin = pin;
	state = _C420PRD_DEFAULT_STATE;
}

C420PRD::C420PRD(bool initialState) {
	pin = _C420PRD_DEFAULT_PIN;
	state = initialState;
}

C420PRD::C420PRD(uint8_t pin, bool initialState) {
	pin = pin;
	state = initialState;
}
void C420PRD::setRelayPin() {
	if(state == _C420PRD_RS) {
		digitalWrite(pin, HIGH);
	} else {
		digitalWrite(pin, LOW);
	}
}
void C420PRD::init() {
	pinMode(pin,OUTPUT);
	setRelayPin();
}
bool C420PRD::getState() {
	return state;
}
void C420PRD::toggle() {
	if(state == _C420PRD_RS) {
		state = _C420PRD_MS;
	} else {
		state = _C420PRD_RS;
	}
	setRelayPin();
}
void C420PRD::useReserveSupply() {
	if(state == _C420PRD_MS) {
		state = _C420PRD_RS
		setRelayPin();
	}
}
void C420PRD::useMainSupply() {
	if(state == _C420PRD_RS) {
		state = _C420PRD_MS
		setRelayPin();
	}
}