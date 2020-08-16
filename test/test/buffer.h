#pragma once
#include <Windows.h>

static HANDLE screen[4]; //두 개의 화면버퍼를 담을 배열
int nScreenIndex;   //현재 선택 버퍼가 뭔지 저장
COORD size = { 1920, 1080 };  //좌표를 저장하기 위한 구조채를 선언.
void CreatBuffer()

{

	CONSOLE_CURSOR_INFO cci;

	SMALL_RECT rect;





	screen[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

	SetConsoleScreenBufferSize(screen[0], size);

	SetConsoleWindowInfo(screen[0], TRUE, &rect);



	screen[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

	SetConsoleScreenBufferSize(screen[1], size);

	SetConsoleWindowInfo(screen[1], TRUE, &rect);



	cci.dwSize = 1;

	cci.bVisible = FALSE;

	SetConsoleCursorInfo(screen[0], &cci);

	SetConsoleCursorInfo(screen[1], &cci);

}
void WriteBuffer(int x, int y, char str[])

{

	DWORD dw;

	COORD CursorPosition = { x, y };

	SetConsoleCursorPosition(screen[nScreenIndex], CursorPosition);

	WriteFile(screen[nScreenIndex], str, strlen(str), &dw, NULL);

}
void FlippingBuffer()

{



	SetConsoleActiveScreenBuffer(screen[nScreenIndex]);

	nScreenIndex = !nScreenIndex;



}
void DeleteBuffer()

{

	CloseHandle(screen[0]);

	CloseHandle(screen[1]);



}



