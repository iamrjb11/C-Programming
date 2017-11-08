/**
1
01
101
0101
10101
**/

#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)&&n>0)
    {
        int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(i%2!=0)
                {
                    if(j%2!=0) printf("1");
                    else printf("0");
                }
                else
                {
                    if(j%2==0) printf("1");
                    else printf("0");
                }
            }
            printf("\n");
        }
    }
}
