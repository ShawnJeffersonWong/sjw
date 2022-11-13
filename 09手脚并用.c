#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char* convertAndMerge(char words[2][20]);
char dst[50];
int main(void)
{
	char words[2][20] = { "Welcome to Xiyou ","Linux Group 2022" };
	printf("%s\n", words[0]);
	printf("%s\n", words[1]);
	char* str = convertAndMerge(words);
	printf("str=%s\n", str);
	//free(str);
	return 0;
}
char* convertAndMerge(char words[2][20])
{
	strcpy(dst, words[0]);
	strcat(dst, words[1]);
	for (int i = 0; dst[i] != '\0'; i++)
	{
		if (dst[i] >= 'A' && dst[i] <= 'Z')
		{
			dst[i] += 32;
		}
		else if (dst[i] >= 'a' && dst[i] <= 'z')
		{
			dst[i] -= 32;
		}
	}
	return dst;
}