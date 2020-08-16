#pragma once
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#pragma comment(lib,"winmm.lib")
#include "print.h"
void setCursor(int x, int y)

{

	COORD pos;

	pos.X = x;

	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}



COORD getCursor(void)

{

	COORD curPoint;

	CONSOLE_SCREEN_BUFFER_INFO pos;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &pos);

	curPoint.X = pos.dwCursorPosition.X;

	curPoint.Y = pos.dwCursorPosition.Y;

	return curPoint;

}



void removeCursor(void)

{

	CONSOLE_CURSOR_INFO cur;

	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur);

	cur.bVisible = 0;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur);

}
int detect(int x, int y)

{

	int x1 = 0;

	int y1 = 0;



	COORD cur = getCursor();


	x1 = cur.X + x;

	y1 = cur.Y + y;

	x1 = x1 / 2 - 2;

	y1 = y1 - 2;



	if (!((x1 >= 0 && x1 < 40) && (y1 >= 0 && y1 < 40))

		return 1;



	//배열을넘어가지않는이유

	if (PVE_maze[y1][x1] == '1')

		return 1;


	else

		return 0;

}

void RemoveCharacter_Set(int x, int y)

{

	int value = detect(x, y);



	if (value == 0)

	{

		COORD cur = getCursor();



		erase();

		setCursor(cur.X + x, cur.Y + y);

	}

}

}

