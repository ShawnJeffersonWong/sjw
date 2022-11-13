#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main0701()
{
	int a[5] = { 1,2,3,4,5 };
	int(*p)[5];//数组指针(*p)[n}
	p = &a;
	printf("%p\n", a);//首元素地址
	printf("%p\n", p);//数组a地址
	printf("%p\n", *p);//首元素地址,即数组a本身
	printf("%p\n", p[0]);//首元素地址
	printf("%d\n", *p[0]);//首元素的值1
	printf("%d\n", **p);//首元素的值1
	return 0;
}

int main0702()
{
	int a = 1;
	int b = 2;
	int* p[2];//指针数组*p[n}
	p[0] = &a;
	p[1] = &b;
	printf("%p\n", &a);
	printf("%p\n", p[0]);//a的地址
	printf("%d\n", *p[0]);//a的值
	printf("%p\n", &b);
	printf("%p\n", p[1]);//b的地址
	printf("%d\n", *p[1]);//b的值
	return 0;
}

int Add(int x, int y);
int Sub(int x, int y);
int main0703()
{
	int a = 10;//函数指针数组
	int b = 20;
	int(*p[2])(int, int); //定义一个有2个指针的数组，指针指向一个函数，
	p[0] = Add;           //该函数有两个整型参数并返回一个整型数
	p[1] = Sub;
	printf("%d %d\n", p[0](a, b), p[1](a, b));
	return 0;
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}