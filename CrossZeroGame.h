#pragma once

enum TCELL {
	EMPTY = '_',
	CROSS = 'X',
	ZERO = 'O'
};

enum TGAME {
	IN_PROCESS,
	USER_WIN,
	CPU_WIN,
	DRAW
};

struct Field {
	const size_t SIZE = 3;
	TCELL** ppField = nullptr;
	size_t turn = 0;
	TGAME game = IN_PROCESS;
	TCELL user = CROSS;
	TCELL ai = ZERO;
};

struct Coord {
	size_t y = 0;
	size_t x = 0;
};

void initField(Field&);
void deInitField(Field&);
void drawField(Field&);
void rollTurn(Field&);
void clearConsole();
Coord turnUser(Field&);
Coord turnCPU(Field&);
TGAME runGame(Field&);
TGAME isWin(Field& f);
TGAME isDraw(Field&);