#include<stdio.h>
#include<string.h>

char* convert(const char* s);
int main(void)
{
	//char* str = "XiyouLinux Group 2022";//指针指向字符串常量区的地址
	char str[] = "XiyouLinux Group 2022";
	//for (int i = 0; str[i] != '\0'; i++)
	//{
	//	if (str[i] >= 'A' && str[i] <= 'Z')
	//	{
	//		str[i] += 32;
	//	}
	//	else if (str[i] >= 'a' && str[i] <= 'z')
	//	{
	//		str[i] -= 32;
	//	}
	//}
	//for (int i = 0; str[i] != '\0'; i++)
	//{
	//	printf("%c", str[i]);
	//}
	char* temp = convert(str);
	puts(temp);
	return 0;
}

//char* convert(const char* s)
//{
//	char* ret = s;
//	for (int i = 0; ret[i] != '\0'; i++)
//	{
//		if (ret[i] <= 'Z' && ret[i] >= 'A')
//		{
//			ret[i] += 32;
//		}
//		else if(ret[i] <= 'z' && ret[i] >= 'a')
//		{
//			ret[i] -= 32;
//		}
//	}
//	return s;//s是首地址,变的是i,ret没有变
//}

char* convert(const char* s)
{
	char* ret = s;
	while (*ret != '\0')
	{
		if (*ret >= 'A' && *ret <= 'Z')
		{
			*ret += 32;
		}
		else if (*ret >= 'a' && *ret <= 'z')
		{
			*ret -= 32;
		}
		ret++;
	}
	return s;//ret变了，指向'\0',s还是首地址
}
