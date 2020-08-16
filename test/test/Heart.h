#pragma once
#include "print.h"

void drawPVEheart(int life) {
	if (life == 5) {
		Heart(56, 15);
		Heart(58, 15);
		Heart(60, 15);
		Heart(62, 15);
		Heart(64, 15);
	}	
	else if (life == 4) {
		Heart(56, 15);
		Heart(58, 15);
		Heart(60, 15);
		Heart(62, 15);
		BlackHeart(64, 15);
	}
	else if (life == 3) {
		Heart(56, 15);
		Heart(58, 15);
		Heart(60, 15);
		BlackHeart(62, 15);
		BlackHeart(64, 15);
	}
	else if (life == 2) {
		Heart(56, 15);
		Heart(58, 15);
		BlackHeart(60, 15);
		BlackHeart(62, 15);
		BlackHeart(64, 15);
	}
	else if (life == 1) {
		Heart(56, 15);
		BlackHeart(58, 15);
		BlackHeart(60, 15);
		BlackHeart(62, 15);
		BlackHeart(64, 15);
	}
}
void drawPVPheart(int life) {
	if (life == 5) {
		Heart(56, 15);
		Heart(58, 15);
		Heart(60, 15);
		Heart(62, 15);
		Heart(64, 15);
	}
	else if (life == 4) {
		Heart(56, 15);
		Heart(58, 15);
		Heart(60, 15);
		Heart(62, 15);
		BlackHeart(64, 15);
	}
	else if (life == 3) {
		Heart(56, 15);
		Heart(58, 15);
		Heart(60, 15);
		BlackHeart(62, 15);
		BlackHeart(64, 15);
	}
	else if (life == 2) {
		Heart(56, 15);
		Heart(58, 15);
		BlackHeart(60, 15);
		BlackHeart(62, 15);
		BlackHeart(64, 15);
	}
	else if (life == 1) {
		Heart(56, 15);
		BlackHeart(58, 15);
		BlackHeart(60, 15);
		BlackHeart(62, 15);
		BlackHeart(64, 15);
	}
}
void drawPVPheart2(int life) {
	if (life == 5) {
		Heart2(56, 17);
		Heart2(58, 17);
		Heart2(60, 17);
		Heart2(62, 17);
		Heart2(64, 17);
	}
	else if (life == 4) {
		Heart2(56, 17);
		Heart2(58, 17);
		Heart2(60, 17);
		Heart2(62, 17);
		BlackHeart(64, 17);
	}
	else if (life == 3) {
		Heart2(56, 17);
		Heart2(58, 17);
		Heart2(60, 17);
		BlackHeart(62, 17);
		BlackHeart(64, 17);
	}
	else if (life == 2) {
		Heart2(56, 17);
		Heart2(58, 17);
		BlackHeart(60, 17);
		BlackHeart(62, 17);
		BlackHeart(64, 17);
	}
	else if (life == 1) {
		Heart2(56, 17);
		BlackHeart(58, 17);
		BlackHeart(60, 17);
		BlackHeart(62, 17);
		BlackHeart(64, 17);
	}
}