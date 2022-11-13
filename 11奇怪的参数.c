#include<stdio.h>

int main1101(int argc,char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return 0;
}