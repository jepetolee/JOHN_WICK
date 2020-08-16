#pragma once
#include <Windows.h>

static HANDLE screen[4]; //�� ���� ȭ����۸� ���� �迭
int nScreenIndex;   //���� ���� ���۰� ���� ����
COORD size = { 1920, 1080 };  //��ǥ�� �����ϱ� ���� ����ä�� ����.
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



