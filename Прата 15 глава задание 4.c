#include "stdafx.h" 
#include <stdio.h> 
#include <locale.h> 
int bac(int n, int numer);

int main(int argc, const char * argv[]) {
	setlocale(0, "Russian");

	int chislo, numer;

	printf("Введите номер");
	scanf_s("%d", &chislo);
	printf("Введите двоичное число");
	scanf_s("%d", &numer);

	printf("%d бит в числе %d равен %d\n", chislo, numer, bac(chislo, numer));

	return 0;
}
int bac(int chislo, int numer)
{
	int bac = 0;
	int i = 0;
	while (i<32)
	{
		if ((01 & chislo) == 1 && i == numer) bac = 1 << numer;
		chislo <<= 1;
		i++;
	}

	return bac;
}