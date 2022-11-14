#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void removeSpace01(char* ch);
void removeSpace02(char* ch);
int main0601()
{
	char ch[] = "  he ll  o w   o rld   ";
	removeSpace01(ch);
	printf("%s\n", ch);
	return 0;
}

void removeSpace01(char* ch)//法一:辅助空间
{
	char str[100] = { 0 };
	char* temp = str;
	int j = 0;
	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] != ' ')
		{
			str[j] = ch[i];
			j++;
		}
	}
	while (*ch++ = *temp++);
}

void removeSpace02(char* ch)//法二:挪空格
{
	char* ftemp = ch;//遍历字符串
	char* rtemp = ch;//记录非空格字符串
	while (*ftemp != '\0')
	{
		if (*ftemp != ' ')
		{
			*rtemp = *ftemp;
			rtemp++;
		}
		ftemp++;
	}
	*rtemp = '\0';//指针走到一半就停了,要加'\0'
}