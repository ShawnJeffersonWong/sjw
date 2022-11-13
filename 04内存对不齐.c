#include<stdio.h>

typedef union
{
	long l;
	int i[5];
	char c;
}UNION;

typedef struct
{
	int like;
	UNION coin;
	double collect;
}STRUCT;
int main0401(void)
{
	printf("sizeof(UNION)=%zu\n", sizeof(UNION));
	printf("sizeof(STRUCT)=%zu\n", sizeof(STRUCT));
	return 0;
}