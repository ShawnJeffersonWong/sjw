#include<stdio.h>

int main0301()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1;i<=n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}

int main0302()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2 * (n - i); j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("%d", k);
		}
		for (int l = i - 1; l > 0; l--)
		{
			printf("%d", l);
		}
		printf("\n");
	}
	return 0;
}
