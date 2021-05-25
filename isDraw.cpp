#include "CrossZeroGame.h"
#include <iostream>

TGAME isDraw(Field& f) {
	for (size_t x = 0; x < f.SIZE; x++) {
		for (size_t y = 0; y < f.SIZE; y++) {
			if (f.ppField[x][y] == EMPTY) {
				return IN_PROCESS;
			}
		}
	}
	return DRAW;
}