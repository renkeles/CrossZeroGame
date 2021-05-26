#include "CrossZeroGame.h"
#include <iostream>
#include <Windows.h>

Coord turnUser(Field& f) {
	Coord c = { 0 };
	while (true)
	{
		std::cout << "  Enter Y (0..2): ";
		std::cin >> c.y;
		std::cout << "  Enter X (0..2): ";
		std::cin >> c.x;
		if (f.ppField[c.y][c.x] == EMPTY) {
			return c;
		}
		else {
			std::cout << "   Cell is occuped!" << std::endl;
			Sleep(1000);
			clearConsole();
			drawField(f);
		}
	}

}