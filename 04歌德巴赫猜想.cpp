#include<bits/stdc++.h>
using namespace std;

int isPrime(int x);
 int main()
 {
    int N;
    scanf("%d",&N);
    for(int i=2;i<N;i++)
    {
        if(isPrime(i)==1)
        {
            if(isPrime(N-i)==1)
            {
                printf("%d = %d + %d",N,i,N-i);
                break;
            }
        }
    }
    return 0;
 }

  int isPrime(int x)
  {
    if(x==1) return 0;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
  } 
