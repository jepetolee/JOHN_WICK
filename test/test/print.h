#pragma once
#include <Windows.h>


void play(int x, int y) {

	 HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("guy.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 25, 40, hMemDC, 0, 0, 25, 40, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);/* 
	 HINSTANCE hInstance = GetModuleHandle(NULL);
   HWND hWnd = FindWindow("ConsoleWindowClass", NULL);
   HBITMAP hImage, hOldBitmap, hBackBitmap;
   HBITMAP hImage2;
   HDC hdc = GetDC(hWnd);
   HDC hBackDC = CreateCompatibleDC(hdc);
   HDC hMemDC = CreateCompatibleDC(hdc);

   hBackBitmap = CreateCompatibleBitmap(hdc, 2604, 1608);
   hOldBitmap = (HBITMAP)SelectObject(hBackDC, hBackBitmap);
   hImage2 = (HBITMAP)LoadImage(NULL,TEXT("background.bmp"),IMAGE_BITMAP,0,0,LR_LOADFROMFILE | LR_CREATEDIBSECTION);

   hImage = (HBITMAP)LoadImage(NULL, TEXT("guy.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
   SelectObject(hMemDC, hImage2);
   BitBlt(hBackDC, 0, 0, 2604, 1608, hMemDC, 0, 0, SRCCOPY);
   DeleteObject(hImage);

   SelectObject(hMemDC, hImage);
   TransparentBlt(hBackDC, x * 35, y * 35, 20, 20, hMemDC, 0, 0, 20, 20, RGB(255, 255, 255));
   DeleteObject(hImage2);

   BitBlt(hdc, 0, 0, 2604, 1608, hBackDC, 0, 0, SRCCOPY);

   DeleteObject(SelectObject(hBackDC, hBackBitmap));
   DeleteObject(hImage);
   DeleteObject(hBackDC);
   DeleteDC(hMemDC);

   ReleaseDC(hWnd, hdc);*/
}
void knifeguy(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("knifeman.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 25, 37, hMemDC, 0, 0, 25, 37, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}

void shotguy(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("shotman.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 25, 37, hMemDC, 0, 0, 25, 37, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}
void blood(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("blood.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 25, 37, hMemDC, 0, 0, 25, 37, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}
void PVP1(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("PVP1.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 17, 35, hMemDC, 0, 0, 17, 35, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}
void PVP2(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("PVP2.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 17, 35, hMemDC, 0, 0, 17, 35, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}

void Heart(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("heart.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}
void Heart2(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("heart2.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}
void BlackHeart(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("emptyheat.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}
void PVshot(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("PVPshot.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 14, 3, hMemDC, 0, 0, 14, 3, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}
void rocketguy(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("rocketman.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 25, 37, hMemDC, 0, 0, 25, 37, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}
void erase(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("zero.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 100, 100, hMemDC, 0, 0, 100, 100, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);


}
void shot(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("shot.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35, y * 35, 3, 14, hMemDC, 0, 0, 3, 14, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);


}
void musket(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("musket.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35.1, y * 35, 8, 8, hMemDC, 0, 0, 8, 8, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);


}
void Knife(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("knife.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35.1, y * 35, 39, 13, hMemDC, 0, 0, 29, 13, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);


}
void back() {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap, hBackBitmap;
	HBITMAP hImage2;
	HDC hdc = GetDC(hWnd);
	HDC hBackDC = CreateCompatibleDC(hdc);
	HDC hMemDC = CreateCompatibleDC(hdc);

	hBackBitmap = CreateCompatibleBitmap(hdc, 2604, 1608);
	hOldBitmap = (HBITMAP)SelectObject(hBackDC, hBackBitmap);

	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("background.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	SelectObject(hMemDC, hOldBitmap);
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	BitBlt(hdc, 0, 0, 2604, 1608, hMemDC, 0, 0, SRCCOPY);
	// 각종 메모리 해제 
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);


}
void scorepoint() {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap, hBackBitmap;
	HBITMAP hImage2;
	HDC hdc = GetDC(hWnd);
	HDC hBackDC = CreateCompatibleDC(hdc);
	HDC hMemDC = CreateCompatibleDC(hdc);

	hBackBitmap = CreateCompatibleBitmap(hdc, 1920, 1080);
	hOldBitmap = (HBITMAP)SelectObject(hBackDC, hBackBitmap);

	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("scoreboard.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	SelectObject(hMemDC, hOldBitmap);
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	BitBlt(hdc, 0, 0, 2604, 1618, hMemDC, 0, 0, SRCCOPY);
	// 각종 메모리 해제 
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);


}
void title() {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("title.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	BitBlt(hdc, 0, 0, 2608, 1568, hMemDC, 0, 0, SRCCOPY);
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
void sel(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("A.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x , 140*y , 204, 270, hMemDC, 0, 0, 204, 270, RGB(255, 0, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
void rocket(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("rocket.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, x * 35.1 ,y * 35, 10, 26, hMemDC, 0, 0, 10, 26, RGB(255, 255, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}
void PVPmap() {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap, hBackBitmap;
	HBITMAP hImage2;
	HDC hdc = GetDC(hWnd);
	HDC hBackDC = CreateCompatibleDC(hdc);
	HDC hMemDC = CreateCompatibleDC(hdc);

	hBackBitmap = CreateCompatibleBitmap(hdc, 1920, 1080);
	hOldBitmap = (HBITMAP)SelectObject(hBackDC, hBackBitmap);

	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("a single-legged.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	SelectObject(hMemDC, hOldBitmap);
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	BitBlt(hdc, 0, 0, 2604, 1617, hMemDC, 0, 0, SRCCOPY);
	// 각종 메모리 해제 
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}

void none(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("0.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc,25* x, 67 * y,50,50, hMemDC, 0, 0, 50, 50, RGB(255, 0, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
void one(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("1.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, 25 * x, 67* y, 50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 0, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
void two(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("2.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, 25 * x, 67 * y, 50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 0, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
void three(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("3.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, 25 * x, 67 * y, 50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 0, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
void four(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("4.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, 25 * x, 67 * y, 50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 0, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
void five(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("5.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, 25 * x, 67 * y,50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 0, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
void six(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("6.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, 25 * x, 67 * y, 50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 0, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
void seven(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("7.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, 25 * x, 67 * y,50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 0, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
void eight(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("8.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, 25 * x,67* y, 50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 0, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
void nine(int x, int y) {

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow(L"ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL, TEXT("9.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	// 이미지 출력 부분
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	TransparentBlt(hdc, 25 * x,67* y,50, 50, hMemDC, 0, 0, 50, 50, RGB(255, 0, 255));
	// 각종 메모리 해제 
	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);

}
