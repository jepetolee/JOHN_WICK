#pragma once

#include "print.h"
#include "screen.h"
#include"map.h"
typedef struct bullet {//총알의 위치를 알려줄 구조체
	int x, y;
} bullet;

struct {
	BOOL exist;
	int x, y;
}Bullet, SHOT, Rocket, EBullet[3],knife, Eknife[4], ERocket[2],PVPshot[2];

typedef struct user_stat {// 유저의 상태를 알려줄 구조체
	int x, y;//위치
	int life;//목숨
	int chk;//총알의 발사 여부
	bullet bullet;//각각의 총알
}user_stat;

typedef struct boss_stat {// 보스의 상태를 알려줄 구조체
	int x, y;//위치
	int life;//목숨
	int chk;//총알의 발사 여부
	bullet bullet;//각각의 총알
}boss_stat;



struct user_stat User;
struct boss_stat Boss;

void gotoxy(int a, int b);
void cursor(int n);
void player(int x, int y);
void menu();

void DrawBullet() {

	shot(Bullet.x, Bullet.y);
}


void bulletmove() {
		if (Bullet.exist == TRUE) {
			if (((PVE_maze[Bullet.y-7][Bullet.x-3 ] == '1'))) {
				Bullet.exist = FALSE;
				Bullet.x = 0, Bullet.y = 0;
			}
			else {
				Bullet.y--;
				DrawBullet();
			}
		}
}

void SDrawBullet() {
	Sleep(1);
	musket(SHOT.x + 1, SHOT.y);
	musket(SHOT.x, SHOT.y);
	musket(SHOT.x - 1, SHOT.y);
}

void shotgun() {
		if (SHOT.exist == TRUE) {
			if (((PVE_maze[SHOT.y - 7][SHOT.x - 3] == '1'))) {
				SHOT.exist = FALSE;
				SHOT.x = 0, SHOT.y = 0;
			}
			else {
				SHOT.y--;
				SDrawBullet();
			}
		}
	}
void RDrawBullet() {
	rocket(Rocket.x, Rocket.y);
}

void ROCKET() {
		if (Rocket.exist == TRUE) {
			Sleep(3);
			if (((PVE_maze[Rocket.y - 7][Rocket.x - 3] == '1'))) {
				Rocket.exist = FALSE;
				Rocket.x = 0, Rocket.y = 0;
			}
			else {
				Rocket.y--;
				RDrawBullet();
			}
		}
	}

void EDrawBullet(int i) {
	shot(EBullet[i].x, EBullet[i].y);
}


void Ebulletmove(int i) {
		if (EBullet[i].exist == TRUE) {
			if (((PVE_maze[EBullet[i].y - 7][EBullet[i].x - 3] == '1'))) {
				EBullet[i].exist = FALSE;
				EBullet[i].x = 0, EBullet[i].y = 0;
			}
			else {
				EBullet[i].y++;
				EDrawBullet(i);
			}
		}
	}


void EDrawRocket(int i) {
	rocket(ERocket[i].x, ERocket[i].y);
}


void Erocketmove(int i) {
	if (ERocket[i].exist == TRUE) {
		if (((PVE_maze[ERocket[i].y - 7][ERocket[i].x - 3] == '1'))) {
			ERocket[i].exist = FALSE;
			ERocket[i].x = 0, ERocket[i].y = 0;
		}
		else {
			ERocket[i].y++;
			EDrawRocket(i);
		}
	}
}
void PVPshoot(int i) {
	PVshot(PVPshot[i].x, PVPshot[i].y);
}


void PVPmove1() {
	if (PVPshot[0].exist == TRUE) {
		if (((PVP_maze[PVPshot[0].y - 7][PVPshot[0].x - 3] == '1'))) {
			PVPshot[0].exist = FALSE;
			PVPshot[0].x = 0, PVPshot[0].y = 0;
		}
		else {
			PVPshot[0].x++;
			PVPshoot(0);
		}
	}
}
void PVPmove2() {
	if (PVPshot[1].exist == TRUE) {
		if (((PVP_maze[PVPshot[1].y - 7][PVPshot[1].x - 3] == '1'))) {
			PVPshot[1].exist = FALSE;
			PVPshot[1].x = 0, PVPshot[1].y = 0;
		}
		else {
			PVPshot[1].x--;
			PVPshoot(1);
		}
	}
}
