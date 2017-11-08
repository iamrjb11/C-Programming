/// Seris : 1+(1+2)+(1+2+3)+.........+(1+2+3+....+n)


#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int sum=0,rem=0;
        for(int i=1;i<=n;i++)
        {
            rem=rem+i;
            sum=sum+rem;
            printf("rem=%d  sum=%d\n",rem,sum);
        }

    }
    return 0;
}
