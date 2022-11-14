#include<stdio.h>

int isNarcissus(int i);
void printN(int m,int n);
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printN(m,n);
    return 0;
}

int isNarcissus(int n)
{
    int a=n;
    int sum=0;
    int count=0;
    while(a)
    {
        a/=10;
        count++;
    }
    a=n;
    for(int i=0;i<count;i++)
    {
        int x=a%10;
        int pow=1;
        for(int j=0;j<count;j++)
        {
            pow*=x;
        }
        sum+=pow;
        a/=10;
    }
    if(sum==n) return 1;
    else return 0;
}

void printN(int m,int n)
{
    while(m<=n)
    {
        if(isNarcissus(m))
        {
            printf("%d\n",m);
        }
        m++;
    }
}