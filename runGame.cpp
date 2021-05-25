#include "CrossZeroGame.h"

TGAME runGame(Field& f) {
	Coord c = { 0 };
	TGAME game = IN_PROCESS;
	if (f.turn % 2 == 0) {
		c = turnUser(f);
		f.ppField[c.y][c.x] = f.user;
		f.turn++;
	}
	else {
		c = turnCPU(f);
		f.ppField[c.y][c.x] = f.ai;
		f.turn++;
	}
	game = isWin(f);
	return game;

}