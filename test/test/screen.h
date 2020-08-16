#pragma once

#pragma comment(lib,"msimg32.lib")
#pragma comment(lib,"winmm.lib")
#include <stdio.h>

#include <stdlib.h>

#include <windows.h>

#include <conio.h>

#define UP 72
#define ENTER 13
#define ESC 27
#define DOWN 80
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include "screen.h"
#include "print.h"
#include "bullet.h"
#include "game.h"
#include "number.h"
#include "sound.h"

void fullscreenConsole() {
	system("cls");

	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleDisplayMode(hCon, CONSOLE_WINDOWED_MODE, NULL);

	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(hCon, &info);

	COORD bufSize;

	bufSize.X = info.dwMaximumWindowSize.X;
	bufSize.Y = info.dwMaximumWindowSize.Y;

	int ret = 0;


	ret = SetConsoleScreenBufferSize(hCon, bufSize);

	if (ret == 0)
		abort();
}
void cursor(int n) // 커서 보이기 & 숨기기
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = n;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void menu() { // 메뉴 고르기
	int a;
	int k = 3;
	int q;
	I();
	while (1) {
		title();
		sel(1540, k);
		q = _getch();
		if ((GetAsyncKeyState(VK_UP) & 0x0001)) {//방향키로 위 아래 양옆 이동
			if (k > 3)
				k = k - 2;
		}
		if ((GetAsyncKeyState(VK_DOWN) & 0x0001)) {//방향키로 위 아래 양옆 이동
			if (k < 9)
				k = k + 2;
		}
		if ((GetAsyncKeyState(VK_ESCAPE) & 0x0001)) {//방향키로 위 아래 양옆 이동
			exit(0);
		}
		if ((GetAsyncKeyState(VK_RETURN) & 0x0001)) {//방향키로 위 아래 양옆 이동
			if (k == 3) {
				system("cls");
				PVPgame();
			}
			if (k == 5) {
				system("cls");
				PVEgame();
			}
			if (k == 7) {
				system("cls");
				PVEgame();
			}
			if (k == 9) {
				system("cls");
				PVEgame	();
			}
		}
	}
	}
