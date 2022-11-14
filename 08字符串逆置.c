#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void inverse01(char* ch);
void inverse02(char* ch);
int palindrome(char* ch);
int main0801()
{
	char ch1[] = "hello world!";
	char ch2[] = "abccba";
	//inverse02(ch1);
	//printf("%s\n", ch1);
	int value=palindrome(ch2);
	if (value == 1) printf("%s是回文字符串\n", ch2);
	else printf("%s不是回文字符串\n", ch2);
	return 0;
}

void inverse01(char* ch)
{
	int i = 0;
	int j = strlen(ch) - 1;
	while (i < j)
	{
		char temp = ch[i];
		ch[i] = ch[j];
		ch[j] = temp;
		i++;
		j--;
	}
}

void inverse02(char* ch)
{
	char* ftemp = ch;
	char* btemp = ch + strlen(ch) - 1;
	while (ftemp < btemp)
	{
		char temp = *ftemp;
		*ftemp = *btemp;
		*btemp = temp;
		ftemp++;
		btemp--;
	}
}

int palindrome(char* ch)
{
	char* ftemp = ch;
	char* btemp = ch + strlen(ch) - 1;
	while (ftemp < btemp)
	{
		if (*ftemp != *btemp)
		{
			return 0;
		}
		ftemp++;
		btemp--;
	}
	return 1;
}