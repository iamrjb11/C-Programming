#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n))
    {
        if(n==1)
        {
            printf("not prime\n");
        }
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                printf("Not prime\n");
                break;
            }
        }
        if(i==n)
        {
            printf("prime\n");
        }
    }
}
