#pragma once
void back()
{

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow("ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL,
		TEXT("test.bmp"),
		IMAGE_BITMAP,
		0,
		0,
		LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	BitBlt(hdc, 0, 0, 1920, 1080, hMemDC, 0, 0, SRCCOPY);

	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);


}
void play(int x,int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow("ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL,TEXT("guy.bmp"),IMAGE_BITMAP,0,0,LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x*14, y*26, 20, 20, hMemDC, 0, 0, 20, 20, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);


}
void erase(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow("ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("zero.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 20, y * 24, 100, 100, hMemDC, 0, 0, 100, 100, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);


}