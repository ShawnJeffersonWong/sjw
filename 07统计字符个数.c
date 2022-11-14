#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main0701()
{
	char ch[] = "slkhvoaisngloqewypgoxcnlxcoizuopaewhpaaagdshojv";
	char arr[26] = { 0 };
	for (int i = 0; i < strlen(ch); i++)
	{
		arr[ch[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] != 0)
		{
			printf("字母%c出现的次数 %d\n", 'a' + i, arr[i]);
		}
	}
	return 0;
}