#include "CrossZeroGame.h"

Coord turnCPU(Field& f) {
	Coord c = { 0 };
	
	for (size_t y = 0; y < f.SIZE; y++) {
		for (size_t x = 0; x < f.SIZE; x++) {
			if (f.ppField[y][x] == EMPTY) {
				f.ppField[y][x] = f.ai;
				if (f.game == CPU_WIN) {
					f.ppField[y][x] = EMPTY;
					c.y = y;
					c.x = x;
					return c;
				}
				f.ppField[y][x] = EMPTY;
			}
		}
	}

	for (size_t y = 0; y < f.SIZE; y++) {
		for (size_t x = 0; x < f.SIZE; x++) {
			if (f.ppField[y][x] == EMPTY) {
				f.ppField[y][x] = f.user;
				if (f.game == USER_WIN) {
					f.ppField[y][x] = EMPTY;
					c.y = y;
					c.x = x;
					return c;
				}
				f.ppField[y][x] = EMPTY;
			}
		}
	}

	if (f.ppField[1][1] == EMPTY) {
		return { 1, 1 };
	}

	//=======================

	if (f.ppField[0][0] == EMPTY) {
		return { 0, 0 };
	}

	if (f.ppField[0][2] == EMPTY) {
		return { 0, 2 };
	}

	if (f.ppField[2][0] == EMPTY) {
		return { 2, 0 };
	}

	if (f.ppField[2][2] == EMPTY) {
		return { 2, 2 };
	}

	//=======================

	if (f.ppField[0][1] == EMPTY) {
		return { 0, 1 };
	}

	if (f.ppField[1][0] == EMPTY) {
		return { 1, 0 };
	}

	if (f.ppField[1][2] == EMPTY) {
		return { 1, 2 };
	}

	if (f.ppField[2][1] == EMPTY) {
		return { 2, 1 };
	}


	//========================================
	for (size_t y = 0; y < f.SIZE; y++) {
		for (size_t x = 0; x < f.SIZE; x++) {
			if (f.ppField[y][x] == EMPTY) {
				c.y = y;
				c.x = x;
				return c;
			}
		}
	}
		

	return c;
}