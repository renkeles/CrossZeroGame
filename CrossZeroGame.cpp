#include <iostream>
#include "CrossZeroGame.h"

int main() {
	Field f;
	initField(f);
	drawField(f);

	
	
	do {

		f.game = runGame(f);
		clearConsole();
		drawField(f);

		if (f.game == USER_WIN) {
			std::cout << "      YOU WIN!" << std::endl;
		}
		else if(f.game == CPU_WIN){
			std::cout << "      CPU WIN!" << std::endl;
		}
		else if (f.game == DRAW) {
			std::cout << "      DRAW !!!" << std::endl;
		}
	} while (f.game == IN_PROCESS);
	


	deInitField(f);


	system("pause");
	return 0;
}
