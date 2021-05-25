#include "CrossZeroGame.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

size_t roll() {
	size_t roll = ((rand() % 100 + 1) & 0x1);
	return roll;
}


void rollTurn(Field& f) {
	srand(time(0));
	if (roll() > 0) {
		f.ai = CROSS;
		f.user = ZERO;
		f.turn = 1;
	}
}