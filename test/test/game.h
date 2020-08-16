#pragma once
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include "screen.h"
#include "print.h"
#include "bullet.h"
#include "sound.h"
#include "map.h"
#include "enemy.h" 
#include "Heart.h" 
#include "number.h" 
#pragma comment(lib,"msimg32.lib")



#define U_X 4+19//유저의 기본 X, Y 좌표 
#define U_Y 7+33//유저의 기본 X, Y 좌표 

void PVEgame() {// 게임 실행
	system("cls");
	User.x = U_X, User.y = U_Y, User.life = 5;
	sethealth();
	point = 0;
	clock_t on,off ;
	while (1) {
		number(94, 12, point);
		number(93, 17, stage);
		silence();
		drawPVEheart(User.life);
		check_knives();
		back();
		Boss.life = 1;
		player(User.x, User.y);//플레이어 출력
		bulletmove();
		shotgun();
		ROCKET();
		if ((GetAsyncKeyState(VK_UP) & 0x0001) && (!(PVE_maze[User.y-1-6][User.x-3] == '1'))) {//방향키로 위 아래 양옆 이동
			User.y--;
		}
		if ((GetAsyncKeyState(VK_ESCAPE) & 0x0001)) {//방향키로 위 아래 양옆 이동
			system("cls");
			menu();
		}
		if ((GetAsyncKeyState(VK_DOWN) & 0x0001)  && (!(PVE_maze[User.y+1-6][User.x-3 ] == '1'))) {
			User.y++;
		}
		if ((GetAsyncKeyState(VK_RIGHT) & 0x0001)  && (!(PVE_maze[User.y-6 ][User.x+1-3] == '1'))) {
			User.x++;
		}
		if ((GetAsyncKeyState(VK_LEFT) & 0x0001)  && (!(PVE_maze[User.y-6][User.x-1-3] == '1'))) {
			User.x--;
		}
		
		if (GetAsyncKeyState('Q')) {//총 쏘는 부분
			pistol();
				Bullet.x = User.x ;
				Bullet.y = User.y ;
				Bullet.exist = TRUE;
		}
		else if (GetAsyncKeyState('W')) {//총 쏘는 부분
			shott();
			
				SHOT.x = User.x;
				SHOT.y = User.y;
				SHOT.exist = TRUE;
		}
		else if (GetAsyncKeyState('E')) {//총 쏘는 부분
			knife.x = 0;
			knife.y = 0;
			knifde();
			Knife(User.x - 1, User.y - 1);
			knife.x = User.x - 1;
			knife.y = User.y - 1;
			Sleep(15);
		}
		else if (GetAsyncKeyState('R')) {//총 쏘는 부분
			rocketer();
				Rocket.x = User.x;
				Rocket.y = User.y ;
				Rocket.exist = TRUE;
		}
		if ( (User.x == Eknife[0].x && User.y == Eknife[0].y)|| (User.x == Eknife[1].x && User.y == Eknife[1].y) || (User.x == Eknife[2].x && User.y == Eknife[2].y) || (User.x == Eknife[3].x && User.y == Eknife[3].y) ||(User.x == EBullet[0].x && User.y == EBullet[0].y) || (User.x == EBullet[1].x && User.y == EBullet[1].y) || (User.x == EBullet[2].x && User.y == EBullet[2].y) || (User.x == ERocket[0].x && User.y == ERocket[0].y) || (User.x == ERocket[1].x && User.y == ERocket[1].y)) {
			User.life--;
			ooh();
		}
		if (User.life == 0) {
			system("cls");
			while (1) {
				scorepoint();
				number(94, 12, point);
				if (GetAsyncKeyState(VK_RETURN)) {
					system("cls");
					menu();
				}
			}
		}
	}
}
void PVPgame() {// 게임 실행
	//silence();
	PVPmusic();
	system("cls");
	int i = 1, k = 1, b_move;
	unsigned int prev_time = 0;
	User.x = 6+3, User.y =19+7 , User.life = 5;
	int User2x = 29+7;
	int User2y = 19+7;
	int User2life = 5;
	while (1) {
		PVPmap();
		drawPVPheart(User.life);
		drawPVPheart2(User2life);
		PVP1(User.x, User.y);//플레이어 출력
		PVP2(User2x, User2y);
		PVPmove1();
		PVPmove2();
		if ((GetAsyncKeyState('W') & 0x0001) && ((PVP_maze[User.y - 1 - 6][User.x - 3] == '0'))) {//방향키로 위 아래 양옆 이동
			User.y--;
		}
		if ((GetAsyncKeyState(VK_ESCAPE) & 0x0001)) {//방향키로 위 아래 양옆 이동
			system("cls");
			menu();
		}
		if ((GetAsyncKeyState('S') & 0x0001) && ((PVP_maze[User.y + 1 - 6][User.x - 3] == '0'))) {
			User.y++;
		}
		if ((GetAsyncKeyState('D') & 0x0001) && ((PVP_maze[User.y - 6][User.x + 1 - 3] == '0'))) {
			User.x++;
		}
		if ((GetAsyncKeyState('A') & 0x0001) && ((PVP_maze[User.y - 6][User.x -1 - 3] == '0'))) {
			User.x--;
		}
		if ((GetAsyncKeyState(VK_UP) & 0x0001) && ((PVP_maze[User2y - 1 - 6][User2x - 3] == '0'))) {//방향키로 위 아래 양옆 이동
			User2y--;
		}
		if ((GetAsyncKeyState(VK_DOWN) & 0x0001) && ((PVP_maze[User2y + 1 - 6][User2x - 3] == '0'))) {
			User2y++;
		}
		if ((GetAsyncKeyState(VK_RIGHT) & 0x0001) && ((PVP_maze[User2y - 6][User2x + 1 - 3] == '0'))) {
			User2x++;
		}
		if ((GetAsyncKeyState(VK_LEFT) & 0x0001) && ((PVP_maze[User2y - 6][User2x - 1 - 3] == '0'))) {
			User2x--;
		}
		if (GetAsyncKeyState('R')) {//총 쏘는 부분
			pistol();
				PVPshot[0].x = User.x ;
				PVPshot[0].y = User.y ;
				PVPshot[0].exist = TRUE;
			
		}
		if (GetAsyncKeyState(VK_RSHIFT)) {//총 쏘는 부분
			pistol();
			PVPshot[1].x = User2x;
			PVPshot[1].y = User2y;
			PVPshot[1].exist = TRUE;

		}
		if (User.x == PVPshot[1].x && User.y == PVPshot[1].y) { 
			User.life--; 
			ooh();
		}
		if (User2x == PVPshot[0].x && User2y == PVPshot[0].y) {
			User2life--;
			ooh();
		}
		if (User.life==0) {
			menu();
		}
		if (User2life==0) {
			menu();
		}
	}
}