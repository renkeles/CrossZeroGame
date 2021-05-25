#include "CrossZeroGame.h"

void deInitField(Field& f) {
	for (size_t i = 0; i < f.SIZE; i++) {
		delete[] f.ppField[i];
	}
	delete[] f.ppField;
	f.ppField = nullptr;
}