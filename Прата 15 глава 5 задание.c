#include "stdafx.h"
#include <stdio.h>
#include <locale.h>

int rotate(int num, int bit);
int main(void)
{
	setlocale(0, "Russian");
	int number, bits;
	int newnum;
	puts("Введите число и смените бит:");
	scanf_s("%d %d", &number, &bits);
	newnum = rotate(number, bits);
	printf("Перевёрнутое число %d.\r\n", newnum);
	return 0;
}

int rotate(int num, int bit)
{
	int bs = 0;
	int move;
	int mask = 1;
	int temp = num;
	while (temp > 0)
	{
		temp >>= 1;
		bs++;
	}

	for (int i = 0; i < bs; i++)
		mask = (mask << 1) | 1;
	move = num >> (bs - bit % bs);
	num <<= bit;
	num &= mask;
	num |= move;
	return num;
}
