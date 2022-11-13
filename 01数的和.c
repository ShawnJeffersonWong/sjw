#include<stdio.h>

int main()
{
    int n;
    int c=0;
    scanf("%d",&n);
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int k=0;k<=9;k++)
            {
                if(i+j+k==n)
                {
                    c++;
                    if(c<6)
                    {
                        printf("%8d",i*100+j*10+k);
                    }
                    else if(c==6)
                    {
                        printf("%8d\n",i*100+j*10+k);
                        c=0;
                    }
                }
            }
        }
    }
    if(c!=0) printf("\n");
    return 0;
}