#include "CrossZeroGame.h"
#include <iostream>

TGAME isWin(Field& f) {

	if (f.ppField[0][0] == f.ppField[0][1] && f.ppField[0][0] == f.ppField[0][2]) {
		if (f.ppField[0][0] == f.user) {
			return USER_WIN;
		}
		else if (f.ppField[0][0] == f.ai) {
			return CPU_WIN;
		}
	}
	if (f.ppField[1][0] == f.ppField[1][1] && f.ppField[1][0] == f.ppField[1][2]) {
		if (f.ppField[1][0] == f.user) {
			return USER_WIN;
		}
		else if (f.ppField[1][0] == f.ai) {
			return CPU_WIN;
		}
	}
	if (f.ppField[2][0] == f.ppField[2][1] && f.ppField[2][0] == f.ppField[2][2]) {
		if (f.ppField[2][0] == f.user) {
			return USER_WIN;
		}
		else if (f.ppField[2][0] == f.ai) {
			return CPU_WIN;
		}
	}

	//==================

	if (f.ppField[0][0] == f.ppField[1][0] && f.ppField[0][0] == f.ppField[2][0]) {
		if (f.ppField[0][0] == f.user) {
			return USER_WIN;
		}
		else if (f.ppField[0][0] == f.ai) {
			return CPU_WIN;
		}
	}
	if (f.ppField[0][1] == f.ppField[1][1] && f.ppField[0][1] == f.ppField[2][1]) {
		if (f.ppField[0][1] == f.user) {
			return USER_WIN;
		}
		else if (f.ppField[0][1] == f.ai) {
			return CPU_WIN;
		}
	}
	if (f.ppField[0][2] == f.ppField[1][2] && f.ppField[0][2] == f.ppField[2][2]) {
		if (f.ppField[0][2] == f.user) {
			return USER_WIN;
		}
		else if (f.ppField[0][2] == f.ai) {
			return CPU_WIN;
		}
	}

	//====================


	if (f.ppField[0][0] == f.ppField[1][1] && f.ppField[0][0] == f.ppField[2][2]) {
		if (f.ppField[0][0] == f.user) {
			return USER_WIN;
		}
		else if (f.ppField[0][0] == f.ai) {
			return CPU_WIN;
		}
	}
	if (f.ppField[2][0] == f.ppField[1][1] && f.ppField[2][0] == f.ppField[0][2]) {
		if (f.ppField[2][0] == f.user) {
			return USER_WIN;
		}
		else if (f.ppField[2][0] == f.ai) {
			return CPU_WIN;
		}
	}

	if (isDraw(f) == DRAW) {
		return DRAW;
	}
	return IN_PROCESS;
}