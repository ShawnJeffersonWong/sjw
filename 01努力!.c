#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main0101()
{
	printf("%d\n", printf("Xiyou Linux Group-2%d", printf("")));
	return 0;
}

int main0102()
{
	char p0[] = "Hello,Linux";
	char* p1 = "Hello,Linux";
	char p2[11] = "Hello,Linux";
	printf("p0 == p1: %d, strcmp(p0,p2): %d\n", p0 == p1, strcmp(p0, p2));
	printf("sizeof(p0): %zu, sizeof(p1): %zu, sizeof(*p2): %zu\n",
		sizeof(p0), sizeof(p1), sizeof(*p2));
	printf("strlen(p0): %zu, strlen(p1): %zu\n", strlen(p0), strlen(p1));
	return 0;
}
//int a = 3;
//void test()
//{
//	int a = 1;
//	a += 1;
//	{
//		int a = a + 1;
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//}
//int main0103(void)
//{
//	test();
//	printf("a=%d\n", a);
//}
int main0111(int argc,char** argv)
{
	printf("argc=%d\n", argc);
	while (1)
	{
		argc++;
		if (argc < 0)
		{
			printf("%s\n", (char*)argv[0]);
			break;
		}
	}
}

int main0112()
{
	int data1[2][3] = { {0X636c6557,0X20656d6f,0X58206f74},
	{0X756f7969,0X6e694c20,0X00000000} };
	int data2[] = { 0X47207875,0X70756f72,0X32303220,0X00000a32 };
	char* a = (char*)data1;
	char* b = (char*)data2;
	char buf[1024];
	strcpy(buf, a);
	strcat(buf, b);
	printf("%s\n", buf);
	return 0;
}