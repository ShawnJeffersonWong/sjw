#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main0301()
{
	int n, s = 0;
	//scanf("%d", &n);
	n = -38945;
	while (n != 0)
	{
		s = s * 10 + n % 10;
		n = n / 10;
	}
	printf("%d\n", s);
}