#include "CrossZeroGame.h"
#include <iostream>

void drawField(Field& f) {
	

	std::cout << std::endl;
	std::cout << "    |#|X|";
	for (size_t i = 0; i < f.SIZE; i++) {
		std::cout << i << "|";
	}
	std::cout << std::endl;

	std::cout << "    |Y|#|";
	for (size_t i = 0; i < f.SIZE; i++) {
		std::cout << "#|";
	}
	std::cout << std::endl;

	for (size_t y = 0; y < f.SIZE; y++) {
		std::cout << "    |" << y << "|" << "#|";
		for (size_t x = 0; x < f.SIZE; x++) {
			std::cout << (char)f.ppField[y][x] << "|";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "      User: " << (char)f.user << std::endl;
	std::cout << "      AI  : " << (char)f.ai << std::endl;
	std::cout << std::endl;
}