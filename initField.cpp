#include "CrossZeroGame.h"

void initField(Field& f) {
	f.ppField = new TCELL * [f.SIZE];
	for (size_t i = 0; i < f.SIZE; i++) {
		f.ppField[i] = new TCELL[f.SIZE];
	}

	for (size_t y = 0; y < f.SIZE; y++) {
		for (size_t x = 0; x < f.SIZE; x++) {
			f.ppField[y][x] = EMPTY;
		}
	}

	rollTurn(f);
}