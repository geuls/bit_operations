#include "stdafx.h"
#include <stdio.h>
int bstoi(char *pbin);
int main(void)
{
	char *pbin = "11001";
	printf("%s is %d\r\n", pbin, bstoi(pbin));
	return 0;
}
int bstoi(char *pbin)
{
	int dec = 0;
	while (*pbin != '\0')
		dec = (dec << 1) + *pbin++ - '0';
	return dec;
}