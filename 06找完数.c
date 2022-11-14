#include<stdio.h>

int main()
{
    int m,n;
    int flag=0;
    int arr[1000];
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        int sum=0;
        int index=0;
        for(int j=1;j<= (i/2);j++)
        {
            if(i%j==0)
            {
                sum+=j;
                arr[index++]=j;
            }
        }
        if(sum==i)
        {
            flag=1;
            printf("%d = ",i);
            for(int k=0;k<index-1;k++)
            {
                printf("%d + ",arr[k]);
            }
            printf("%d\n",arr[index-1]);
        }
    }
    if(flag==0)
    {
        printf("None\n");
    }
    return 0;
}