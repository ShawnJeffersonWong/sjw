#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main0701()
{
	int a[5] = { 1,2,3,4,5 };
	int(*p)[5];//����ָ��(*p)[n}
	p = &a;
	printf("%p\n", a);//��Ԫ�ص�ַ
	printf("%p\n", p);//����a��ַ
	printf("%p\n", *p);//��Ԫ�ص�ַ,������a����
	printf("%p\n", p[0]);//��Ԫ�ص�ַ
	printf("%d\n", *p[0]);//��Ԫ�ص�ֵ1
	printf("%d\n", **p);//��Ԫ�ص�ֵ1
	return 0;
}

int main0702()
{
	int a = 1;
	int b = 2;
	int* p[2];//ָ������*p[n}
	p[0] = &a;
	p[1] = &b;
	printf("%p\n", &a);
	printf("%p\n", p[0]);//a�ĵ�ַ
	printf("%d\n", *p[0]);//a��ֵ
	printf("%p\n", &b);
	printf("%p\n", p[1]);//b�ĵ�ַ
	printf("%d\n", *p[1]);//b��ֵ
	return 0;
}

int Add(int x, int y);
int Sub(int x, int y);
int main0703()
{
	int a = 10;//����ָ������
	int b = 20;
	int(*p[2])(int, int); //����һ����2��ָ������飬ָ��ָ��һ��������
	p[0] = Add;           //�ú������������Ͳ���������һ��������
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