#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include "screen.h"
#include "print.h"
#include "bullet.h"
#include "game.h"
#pragma comment(lib,"msimg32.lib")


void gotoxy(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void player(int x, int y) { // 플레이어 출력
	play(x,y);
}
int main() {
	fullscreenConsole();
	cursor(0);
	srand((unsigned)time(0));
	menu();
	/*printMap();*/
	return 0;

}


