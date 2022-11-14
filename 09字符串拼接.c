#include<stdio.h>
#include<string.h>

void my_strcat01(char* ch1, const char* ch2);
void my_strcat02(char* ch1, const char* ch2);
void my_strcat03(char* ch1, const char* ch2);
void my_strcat04(char* ch1, const char* ch2);

int main0901()
{
	char ch1[100] = "hello ";
	char ch2[] = "world!";
	my_strcat04(ch1, ch2);
	printf("%s\n", ch1);
	return 0;
}

void my_strcat01(char* ch1,const char* ch2)
{
	int i=0;
	int j=0;
	while (ch1[i] != '\0')
	{
		i++;
	}
	printf("i = %d\n", i);
	printf("×Ö·û´®³¤¶È:%d\n", strlen(ch1));
	while (ch2[j] != '\0')
	{
		ch1[i+j] = ch2[j];
		j++;
	}
	ch1[i+j] = '\0';
}

void my_strcat02(char* ch1,const char* ch2)
{
	int i = 0;
	while (*(ch1 + i) != '\0')
	{
		i++;
	}
	int j = 0;
	while (*(ch2 + j) != '\0')
	{
		*(ch1 + i + j) = *(ch2 + j);
		j++;
	}
}

void my_strcat03(char* ch1, const char* ch2)
{
	while (*ch1) ch1++;
	while (*ch2)
	{
		*ch1 = *ch2;
		ch1++;
		ch2++;
	}
}
void my_strcat04(char* ch1, const char* ch2)
{
	while (*ch1) ch1++;
	while (*ch1++ = *ch2++); //1.*ch2 *ch1  2.*ch1=*ch2  3.ch2++  ch1++
}