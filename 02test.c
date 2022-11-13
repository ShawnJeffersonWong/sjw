#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main0201(int argc,char** argv)
{
	int data1[2][3] = { {0X636c6557,0X20656d6f,0X58206f74},
	{0X756f7969,0X6e694c20,0X00000000} };
	char* a = (char*)data1;
	char buf[1024];
	strcpy(buf, a);
	printf("%s", buf);
}