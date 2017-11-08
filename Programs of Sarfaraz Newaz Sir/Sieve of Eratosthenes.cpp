#include<stdio.h>
#include<math.h>

int main()
{
    long long int n=10000000,i,j,k;
    scanf("%lld",&n);
    int flag[n];
    for( i=2; i<=n; i++)
    {
        flag[i]=1;
        for( j=2; j<=sqrt(n); j++)
        {
            if(flag[i]==1)
            {
                for( k=2; j*k<=n; k++)
                {
                    flag[j*k]=0;
                }
            }
        }
        if(flag[i]==1)
        {
            printf("%lld ",i);
        }
    }
}

