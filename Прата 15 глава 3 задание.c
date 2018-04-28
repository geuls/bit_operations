#include "stdafx.h"
#include <stdio.h>
#include <locale.h>
int bits(int n);

int main(int argc, const char * argv[]) {

	setlocale(0, "Russian");
	int n;

	printf("ВВедите число ");
	scanf_s("%d", &n);
	printf("%d\n", n);

	printf("Количество бит в числе %d включено %d\n", n, bits(n));

	return 0;
}

int bits(int n)
{
	int bits = 0;
	int i = 0;
	while (i<16)
	{
		if ((01 & n) == 1) bits++;
		n >>= 1;
		i++;
	}

	return bits;
}

