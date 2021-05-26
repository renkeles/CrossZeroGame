#include "CrossZeroGame.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

Coord turnCPU(Field& f) {
	srand(time(0));
	Coord c = { 0 };
	
	for (size_t y = 0; y < f.SIZE; y++) {
		for (size_t x = 0; x < f.SIZE; x++) {
			if (f.ppField[y][x] == EMPTY) {
				f.ppField[y][x] = f.ai;
				if (isWin(f) == CPU_WIN) {
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
				if (isWin(f) == USER_WIN) {
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

	//========================================
	size_t maxTry = 100;
	while (maxTry > 0)
	{
		size_t x_rand = (rand() % 2);
		size_t y_rand = (rand() % 2);
		if (f.ppField[y_rand][x_rand] == EMPTY) {
			c.y = y_rand;
			c.x = x_rand;
			return c;
		}
		maxTry--;
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