#pragma once
#include "print.h"
#include "bullet.h"
#include "sound.h"
#include "map.h"
#include "game.h"
int point = 0;
int stage = 0;
struct {
	int health;
	int x, y;
	int Bulletx, Bullety;
	int life ;
}knifeman[4],shotman[3],rocketman[2];
int cnt = 9;
void knife_man(int x, int y) {// 보스 출력
	knifeguy(x, y);

}
void knife_man2(int x, int y) {// 보스 출력
	knifeguy(x, y);
}
void knife_man3(int x, int y) {// 보스 출력
	knifeguy(x, y);
}
void knife_man4(int x, int y) {// 보스 출력
	knifeguy(x, y);
}
void shot_man(int x, int y) {// 보스 출력
	shotguy(x, y);
}
void shot_man2(int x, int y) {// 보스 출력
	shotguy(x, y);
}
void shot_man3(int x, int y) {// 보스 출력
	shotguy(x, y);
}
void rocket_man(int x, int y) {// 보스 출력
	rocketguy(x, y);
}
void rocket_man2(int x, int y) {// 보스 출력
	rocketguy(x, y);
}
void sethealth() {
	for (int i=0;i<4;i++)knifeman[i].health = 4;
	for (int i = 0; i < 3; i++)shotman[i].health = 3;
	for (int i = 0; i < 2; i++)rocketman[i].health = 2;
	knifeman[0].x = 5+3, knifeman[0].y = 13+6;
	knifeman[1].x = 15+3, knifeman[1].y = 13+6;
	knifeman[2].x = 25+3, knifeman[2].y = 13+6;
	knifeman[3].x = 36+3, knifeman[3].y = 13+6;
	shotman[0].x = 7+3, shotman[0].y = 8+6;
	shotman[1].x = 33+3, shotman[1].y = 8+6;
	shotman[2].x = 20+3, shotman[2].y = 6+6;
	rocketman[0].x = 5+3, rocketman[0].y = 3+6;
	rocketman[1].x = 33+3,rocketman[1].y = 3+6;
	knifeman[0].life = 1;
	knifeman[1].life = 1;
	knifeman[2].life = 1;
	knifeman[3].life = 1;
	shotman[0].life = 1;
	shotman[1].life = 1;
	shotman[2].life = 1;
	rocketman[0].life = 1;
	rocketman[1].life = 1;
}
void checkknife1(){

	Eknife[0].x = 0;
	Eknife[0].y = 0;
	int i = 1, k = 1, b_move;
	clock_t on = clock();
	if (knifeman[0].health > 0) {

		knife_man(knifeman[0].x, knifeman[0].y);
	}
		if (((knifeman[0].x == Bullet.x) && (knifeman[0].y == Bullet.y) || (knifeman[0].x == SHOT.x+1) && (knifeman[0].y == SHOT.y) || (knifeman[0].x == SHOT.x-1) && (knifeman[0].y == SHOT.y) || (knifeman[0].x == Rocket.x) && (knifeman[0].y == Rocket.y) || (knifeman[0].x == knife.x) && (knifeman[0].y == knife.y))) {
			knifeman[0].health--;
			blood(knifeman[0].x, knifeman[0].y);
			ooh();
		}
		if (knifeman[0] .life==1&&knifeman[0].health == 0) {
			point += 10;
			cnt--;
			knifeman[0].x = 1000;
			knifeman[0].y = 1000;
			knifeman[0].life--;
		}
		if (on%5==0 && (knifeman[0].health > 0)) {//1초마다 총알, 보스 위치 이동 총알 없을 시 총알 생성
			b_move = rand() % 2;
			int k = rand() % 2;
			int a = rand() % 2;
			int p = rand() % 2;
			int m = rand() % 2;
			if ((p == 0) && (!(PVE_maze[knifeman[0].y - 6][knifeman[0].x + 1 - 3] == '1'))) knifeman[0].x += k;
			else if ((p == 1) && (!(PVE_maze[knifeman[0].y - 6][knifeman[0].x - 1 - 3] == '1'))) knifeman[0].x -= k;
			if ((m == 0) && (!(PVE_maze[knifeman[0].y + 1 - 6][knifeman[0].x - 3] == '1')))knifeman[0].y += a;
			else if ((m == 1) && (!(PVE_maze[knifeman[0].y - 1 - 6][knifeman[0].x - 3] == '1')))knifeman[0].y -= a;
		Knife(knifeman[0].x + 1, knifeman[0].y + 1);
		Eknife[0].x = knifeman[0].x + 1;
		Eknife[0].y = knifeman[0].y + 1;
			Sleep(15);

		}
}

void checkknife2() {

	Eknife[1].x = 0;
	Eknife[1].y = 0;
	int i = 1, k = 1, b_move;
	clock_t on = clock();

	if (knifeman[1].health > 0) {

		knife_man2(knifeman[1].x, knifeman[1].y);
	}
	if ( ((knifeman[1].x == Bullet.x) && (knifeman[1].y = Bullet.y) || (knifeman[1].x == SHOT.x-1) && (knifeman[1].y = SHOT.y) || (knifeman[1].x == SHOT.x+1) && (knifeman[0].y = SHOT.y) || (knifeman[1].x == SHOT.x) && (knifeman[1].y = SHOT.y) || (knifeman[1].x == Rocket.x) && (knifeman[1].y = Rocket.y) || (knifeman[1].x == knife.x) && (knifeman[1].y = knife.y))) {
		knifeman[1].health--;
		blood(knifeman[1].x, knifeman[1].y);
		ooh();
	}
	if (knifeman[1].life == 1 && knifeman[1].health == 0) {
		point += 10;
		cnt--;
		knifeman[1].x = 1000;
		knifeman[1].y = 1000;
		knifeman[1].life--;
	}
	if (on % 5 == 0 && (knifeman[1].health > 0)) {//1초마다 총알, 보스 위치 이동 총알 없을 시 총알 생성
		b_move = rand() % 2;
		int k = rand() % 2;
		int a = rand() % 2;
		int p = rand() % 2;
		int m = rand() % 2;
		if ((p == 0) && (!(PVE_maze[knifeman[1].y - 6][knifeman[1].x + 1 - 3] == '1'))) knifeman[1].x += k;
		else if ((p == 1) && (!(PVE_maze[knifeman[1].y - 6][knifeman[1].x - 1 - 3] == '1'))) knifeman[1].x -= k;
		if ((m == 0) && (!(PVE_maze[knifeman[1].y + 1 - 6][knifeman[1].x - 3] == '1')))knifeman[1].y += a;
		else if ((m == 1) && (!(PVE_maze[knifeman[1].y - 1 - 6][knifeman[1].x - 3] == '1')))knifeman[1].y -= a;
		Knife(knifeman[1].x + 1, knifeman[1].y + 1);
		Eknife[1].x = knifeman[1].x + 1;
		Eknife[1].y = knifeman[1].y + 1;
		Sleep(15);

	}
}

void checkknife3() {

	int i = 1, k = 1, b_move;
	clock_t on = clock();

	Eknife[2].x = 0;
	Eknife[2].y = 0;
	if (knifeman[2].health > 0) {

		knife_man3(knifeman[2].x, knifeman[2].y);
	}
	if (((knifeman[2].x == Bullet.x) && (knifeman[2].y == Bullet.y) || (knifeman[2].x == SHOT.x-1) && (knifeman[2].y == SHOT.y) || (knifeman[2].x == SHOT.x+1) && (knifeman[2].y == SHOT.y) || (knifeman[2].x == SHOT.x) && (knifeman[2].y == SHOT.y) || (knifeman[2].x == Rocket.x) && (knifeman[2].y == Rocket.y) || (knifeman[2].x == knife.x) && (knifeman[2].y == knife.y))) {
		knifeman[2].health--;
		blood(knifeman[2].x, knifeman[2].y);
		ooh();
	}
	if (knifeman[2].life == 1 && knifeman[2].health == 0) {
		point += 10;
		cnt--;
		knifeman[2].x = 1000;
		knifeman[2].y = 1000;
		knifeman[2].life--;
	}
	if (on % 5 == 0 && (knifeman[2].health > 0)) {//1초마다 총알, 보스 위치 이동 총알 없을 시 총알 생성
		b_move = rand() % 2;
		int k = rand() % 2;
		int a = rand() % 2;
		int p = rand() % 2;
		int m = rand() % 2;
		if ((p == 0) && (!(PVE_maze[knifeman[2].y - 6][knifeman[2].x + 1 - 3] == '1'))) knifeman[2].x += k;
		else if ((p == 1) && (!(PVE_maze[knifeman[2].y - 6][knifeman[2].x - 1 - 3] == '1'))) knifeman[2].x -= k;
		if ((m == 0) && (!(PVE_maze[knifeman[0].y + 1 - 6][knifeman[2].x - 3] == '1')))knifeman[2].y += a;
		else if ((m == 1) && (!(PVE_maze[knifeman[2].y - 1 - 6][knifeman[2].x - 3] == '1')))knifeman[2].y -= a;
		Knife(knifeman[2].x + 1, knifeman[2].y + 1);
		Eknife[2].x = knifeman[2].x + 1;
		Eknife[2].y = knifeman[2].y + 1;
		Sleep(15);

	}
}

void checkknife4() {

	int i = 1, k = 1, b_move;
	clock_t on = clock();

	Eknife[3].x = 0;
	Eknife[3].y = 0;
	if (knifeman[3].health > 0) {

		knife_man4(knifeman[3].x, knifeman[3].y);
	}
	if (((knifeman[3].x == Bullet.x) && (knifeman[3].y == Bullet.y) || (knifeman[3].x == SHOT.x-1) && (knifeman[3].y == SHOT.y) || (knifeman[3].x == SHOT.x+1) && (knifeman[3].y == SHOT.y) || (knifeman[3].x == SHOT.x) && (knifeman[3].y == SHOT.y) || (knifeman[3].x == Rocket.x) && (knifeman[3].y == Rocket.y) || (knifeman[3].x == knife.x) && (knifeman[3].y == knife.y)) ){
		knifeman[3].health--;
		blood(knifeman[3].x, knifeman[3].y);
		ooh();
	}
	if (knifeman[3].life == 1 && knifeman[3].health == 0) {
		point += 10;
		cnt--;
		knifeman[3].x = 1000;
		knifeman[3].y = 1000;
		knifeman[3].life--;
	}
	if (on % 5 == 0 && (knifeman[3].health > 0)) {//1초마다 총알, 보스 위치 이동 총알 없을 시 총알 생성
		b_move = rand() % 2;
		int k = rand() % 2;
		int a = rand() % 2;
		int p = rand() % 2;
		int m = rand() % 2;
		if ((p == 0) && (!(PVE_maze[knifeman[3].y - 6][knifeman[3].x + 1 - 3] == '1'))) knifeman[3].x += k;
		else if ((p == 1) && (!(PVE_maze[knifeman[3].y - 6][knifeman[3].x - 1 - 3] == '1'))) knifeman[3].x -= k;
		if ((m == 0) && (!(PVE_maze[knifeman[3].y + 1 - 6][knifeman[3].x - 3] == '1')))knifeman[3].y += a;
		else if ((m == 1) && (!(PVE_maze[knifeman[3].y - 1 - 6][knifeman[3].x - 3] == '1')))knifeman[3].y -= a;
		Knife(knifeman[3].x + 1, knifeman[3].y + 1);
		Eknife[3].x = knifeman[3].x + 1;
		Eknife[3].y = knifeman[3].y + 1;
		Sleep(15);

	}
}
void checkshot1() {

	int i = 1, k = 1, b_move;
	clock_t on = clock();
	if (shotman[0].health > 0) {

		shot_man(shotman[0].x, shotman[0].y);
		Ebulletmove(0);
	}
	if (shotman[0].life == 1 && shotman[0].health == 0) {
		point += 25;
		cnt--;
		shotman[0].x = 1000;
		shotman[0].y = 1000;
		shotman[0].life--;
	}
	if ( ((shotman[0].x == Bullet.x) && (shotman[0].y = Bullet.y) || (shotman[0].x == SHOT.x-1) && (shotman[0].y == SHOT.y) || (shotman[0].x == SHOT.x+1) && (shotman[0].y ==SHOT.y) || (shotman[0].x == SHOT.x) && (shotman[0].y == SHOT.y) || (shotman[0].x == Rocket.x) && (shotman[0].y == Rocket.y) || (shotman[0].x == knife.x) && (shotman[0].y == knife.y))) {
		shotman[0].health--;
		blood(shotman[0].x, shotman[0].y);
		ooh();
	}
	if (on % 5 == 0 && (shotman[0].health > 0)) {//1초마다 총알, 보스 위치 이동 총알 없을 시 총알 생성
		b_move = rand() % 2;
		int k = rand() % 2;
		int a = rand() % 2;
		int p = rand() % 2;
		int m = rand() % 2;
		if ((p == 0) && (!(PVE_maze[shotman[0].y - 6][shotman[0].x + 1 - 3] == '1'))) shotman[0].x += k;
		else if ((p == 1) && (!(PVE_maze[shotman[0].y - 6][shotman[0].x - 1 - 3] == '1'))) shotman[0].x -= k;
		if ((m == 0) && (!(PVE_maze[shotman[0].y + 1 - 6][shotman[0].x - 3] == '1')))shotman[0].y += a;
		else if ((m == 1) && (!(PVE_maze[shotman[0].y - 1 - 6][shotman[0].x - 3] == '1')))shotman[0].y -= a;
		EBullet[0].exist = TRUE;
		EBullet[0].x = shotman[0].x + 1;
		EBullet[0].y = shotman[0].y + 1;
		Sleep(15);

	}
}
void checkshot2() {

	int i = 1, k = 1, b_move;
	clock_t on = clock();

	if (shotman[1].health > 0) {

		shot_man2(shotman[1].x, shotman[1].y);
		Ebulletmove(1);
	}
	if ( ((shotman[1].x == Bullet.x) && (shotman[1].y == Bullet.y) || (shotman[1].x == SHOT.x-1) && (shotman[1].y == SHOT.y) || (shotman[1].x == SHOT.x+1) && (shotman[1].y == SHOT.y) || (shotman[1].x == SHOT.x) && (shotman[1].y == SHOT.y) || (shotman[1].x == Rocket.x) && (shotman[1].y == Rocket.y) || (shotman[1].x == knife.x) && (shotman[1].y == knife.y))) {
		shotman[1].health--;
		blood(shotman[1].x, shotman[1].y);
		ooh();
	}
	if (shotman[1].life == 1 && shotman[1].health == 0) {
		point += 25;
		cnt--;
		shotman[1].x = 1000;
		shotman[1].y = 1000;
		shotman[1].life--;
	}
	if (on % 5 == 0 && (shotman[1].health > 0)) {//1초마다 총알, 보스 위치 이동 총알 없을 시 총알 생성
		b_move = rand() % 2;
		int k = rand() % 2;
		int a = rand() % 2;
		int p = rand() % 2;
		int m = rand() % 2;
		if ((p == 0) && (!(PVE_maze[shotman[1].y - 6][shotman[1].x + 1 - 3] == '1'))) shotman[1].x += k;
		else if ((p == 1) && (!(PVE_maze[shotman[1].y - 6][shotman[1].x - 1 - 3] == '1'))) shotman[1].x -= k;
		if ((m == 0) && (!(PVE_maze[shotman[1].y + 1 - 6][shotman[1].x - 3] == '1')))shotman[1].y += a;
		else if ((m == 1) && (!(PVE_maze[shotman[1].y - 1 - 6][shotman[1].x - 3] == '1')))shotman[1].y -= a;
		EBullet[1].exist = TRUE;
		EBullet[1].x = shotman[1].x + 1;
		EBullet[1].y = shotman[1].y + 1;
		Sleep(15);

	}
}
void checkshot3() {

	int i = 1, k = 1, b_move;
	clock_t on = clock();

	if (shotman[2].health > 0) {

		shot_man3 (shotman[2].x, shotman[2].y);
		Ebulletmove(2);
	}
	if (( (shotman[2].x == Bullet.x) && (shotman[2].y == Bullet.y) || (shotman[2].x == SHOT.x+1) && (shotman[2].y == SHOT.y) || (shotman[2].x == SHOT.x-1) && (shotman[2].y == SHOT.y) || (shotman[2].x == SHOT.x) && (shotman[2].y == SHOT.y) || (shotman[2].x == Rocket.x) && (shotman[2].y == Rocket.y) || (shotman[2].x == knife.x) && (shotman[2].y == knife.y))) {
		shotman[2].health--;
		blood(shotman[2].x, shotman[2].y);
		ooh();
	}
	if (shotman[2].life == 1 && shotman[2].health == 0) {
		point += 25;
		cnt--;
		shotman[2].x = 1000;
		shotman[2].y = 1000;
		shotman[2].life--;
	}
	if (on % 5 == 0 && (shotman[2].health > 0)) {//1초마다 총알, 보스 위치 이동 총알 없을 시 총알 생성
		b_move = rand() % 2;
		int k = rand() % 2;
		int a = rand() % 2;
		int p = rand() % 2;
		int m = rand() % 2;
		if ((p == 0) && (!(PVE_maze[shotman[2].y - 6][shotman[2].x + 1 - 3] == '1'))) shotman[2].x += k;
		else if ((p == 1) && (!(PVE_maze[shotman[2].y - 6][shotman[2].x - 1 - 3] == '1'))) shotman[2].x -= k;
		if ((m == 0) && (!(PVE_maze[shotman[2].y + 1 - 6][shotman[2].x - 3] == '1')))shotman[2].y += a;
		else if ((m == 1) && (!(PVE_maze[shotman[2].y - 1 - 6][shotman[2].x - 3] == '1')))shotman[2].y -= a;
		EBullet[2].exist = TRUE;
		EBullet[2].x = shotman[2].x + 1;
		EBullet[2].y = shotman[2].y + 1;
		Sleep(15);

	}
}
void checkrocket1() {

	int i = 1, k = 1, b_move;
	clock_t on = clock();

	if (rocketman[0].health > 0) {

		Erocketmove(0);
		rocket_man(rocketman[0].x, rocketman[0].y);
	}
	if (on % 3 == 0 &&( (rocketman[0].x == Bullet.x) && (rocketman[0].y == Bullet.y) || (rocketman[0].x == SHOT.x+1) && (rocketman[0].y == SHOT.y) || (rocketman[0].x == SHOT.x-1) && (rocketman[0].y == SHOT.y) || (rocketman[0].x == SHOT.x) && (rocketman[0].y == SHOT.y) || (rocketman[0].x == Rocket.x) && (rocketman[0].y == Rocket.y) || (rocketman[0].x == knife.x) && (rocketman[0].y == knife.y))) {
		rocketman[0].health--;
		blood(rocketman[0].x, rocketman[0].y);
		ooh();
	}
	if (rocketman[0].life == 1 && rocketman[0].health == 0) {
		point += 40;
		cnt--;
		rocketman[0].x = 1000;
		rocketman[0].y = 1000;
		rocketman[0].life--;
	}
	if (on % 5 == 0 && (rocketman[0].health > 0)) {//1초마다 총알, 보스 위치 이동 총알 없을 시 총알 생성
		b_move = rand() % 2;
		int k = rand() % 2;
		int a = rand() % 2;
		int p = rand() % 2;
		int m = rand() % 2;
		if ((p == 0) && (!(PVE_maze[rocketman[0].y - 6][rocketman[0].x + 1 - 3] == '1'))) rocketman[0].x += k;
		else if ((p == 1) && (!(PVE_maze[rocketman[0].y - 6][rocketman[0].x - 1 - 3] == '1'))) rocketman[0].x -= k;
		if ((m == 0) && (!(PVE_maze[rocketman[0].y + 1 - 6][rocketman[0].x - 3] == '1')))rocketman[0].y += a;
		else if ((m == 1) && (!(PVE_maze[rocketman[0].y - 1 - 6][rocketman[0].x - 3] == '1')))rocketman[0].y -= a;
		ERocket[0].exist = TRUE;
		ERocket[0].x = rocketman[0].x + 1;
		ERocket[0].y = rocketman[0].y + 1;
		Sleep(15);

	}
}
void checkrocket2() {

	int i = 1, k = 1, b_move;
	clock_t on = clock();

	if (rocketman[1].health > 0) {
		Erocketmove(1);
		rocket_man2(rocketman[1].x, rocketman[1].y);
	}
	if (on % 3 == 0 && ((rocketman[1].x == Bullet.x) && (rocketman[1].y == Bullet.y) || (rocketman[1].x == SHOT.x+1) && (rocketman[1].y == SHOT.y) || (rocketman[1].x == SHOT.x-1) && (rocketman[1].y == SHOT.y) || (rocketman[1].x == SHOT.x) && (rocketman[1].y == SHOT.y) || (rocketman[1].x == Rocket.x) && (rocketman[1].y == Rocket.y) || (rocketman[1].x == knife.x) && (rocketman[1].y == knife.y)) ){
		rocketman[1].health--;
		blood(rocketman[1].x, rocketman[1].y);
		ooh();
	}
	if (rocketman[1].life == 1 && rocketman[1].health == 0) {
		point += 40;
		cnt--;
		rocketman[1].x = 1000;
		rocketman[1].y = 1000;
		rocketman[1].life--;
	}
	if (on % 5 == 0 && (rocketman[1].health > 0)) {//1초마다 총알, 보스 위치 이동 총알 없을 시 총알 생성
		b_move = rand() % 2;
		int k = rand() % 2;
		int a = rand() % 2;
		int p = rand() % 2;
		int m = rand() % 2;
		if ((p == 0) && (!(PVE_maze[rocketman[1].y - 6][rocketman[1].x + 1 - 3] == '1'))) rocketman[1].x += k;
		else if ((p == 1) && (!(PVE_maze[rocketman[1].y - 6][rocketman[1].x - 1 - 3] == '1'))) rocketman[1].x -= k;
		if ((m == 0) && (!(PVE_maze[rocketman[1].y + 1 - 6][rocketman[1].x - 3] == '1')))rocketman[1].y += a;
		else if ((m == 1) && (!(PVE_maze[rocketman[1].y - 1 - 6][rocketman[1].x - 3] == '1')))rocketman[1].y -= a;
		ERocket[1].exist = TRUE;
		ERocket[1].x = rocketman[1].x + 1;
		ERocket[1].y = rocketman[1].y + 1;
		Sleep(15);

	}
}
void check_knives() {
	checkknife1();
	checkknife2();
	checkknife3();
	checkknife4();
	checkshot1();
	checkshot2();
	checkshot3();
	checkrocket1();
	checkrocket2();
}
