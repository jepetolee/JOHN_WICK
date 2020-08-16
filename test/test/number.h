#pragma once
#include <Windows.h>
#include "print.h"
void number(int x, double y, int num) {
	int k, cn=0,cnt=0;
	if (num == 0) none(x-2 , y);
	while (num>0) {
		k = num % 10;
		cn++;
		cnt = 2*cn;
		if (k == 0) none(x-cnt,y);
		else if (k == 1) one(x-cnt, y);
		else if (k == 2) two(x - cnt, y);
		else if (k == 3) three(x - cnt, y);
		else if (k == 4) four(x - cnt, y);
		else if (k == 5) five(x - cnt, y);
		else if (k == 6) six(x - cnt, y);
		else if (k == 7) seven(x - cnt, y);
		else if (k == 8) eight(x - cnt, y);
		else if (k == 9) nine(x - cnt, y);
		num /= 10;
	}
}