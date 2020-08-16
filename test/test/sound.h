#pragma once
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#pragma comment(lib,"winmm.lib")

void I() {
	PlaySound(TEXT("intro.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
}
void PVPmusic() {
	PlaySound(TEXT("PVP.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
}
void shott() {
	//PlaySound(TEXT("shot.wav"), NULL, SND_FILENAME |  SND_ASYNC);
}
void pistol() {
	//PlaySound(TEXT("pistol.wav"), NULL, SND_FILENAME |  SND_ASYNC);
}
void rocketer() {
	//PlaySound(TEXT("rocket.wav"), NULL, SND_FILENAME |  SND_ASYNC);
}
void knifde() {
	//PlaySound(TEXT("knife.wav"), NULL, SND_FILENAME |  SND_ASYNC);
}
void silence() {
	//PlaySound(TEXT("silence.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void ooh() {
	//PlaySound(TEXT("damage.wav"), NULL, SND_FILENAME |  SND_ASYNC);
}