#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main0501()
{
	int n;
	long temp;
	long sum=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		temp = i;
		for (int j = 1; j <= i; j++)
		{
			if (j - 1 > 0)
			{
				temp += i * pow(10, j - 1);
			}
		}
		printf("%ld\n", temp);
		sum += temp;
	}
	printf("%ld\n", sum);

	return 0;
}