#include <c420PRD.h>

void C420PRD::init() {
	DDRD = DDRD | PIN_MASK;
	PORT = PORT & MAIN_AND_MASK;
}
bool C420PRD::isOnMain() {
	return !(PORT & RESERVE_OR_MASK);
}
void C420PRD::useReserveSupply() {
	PORT = PORT | RESERVE_OR_MASK;
}
void C420PRD::useMainSupply() {
	PORT = PORT & MAIN_AND_MASK;
}