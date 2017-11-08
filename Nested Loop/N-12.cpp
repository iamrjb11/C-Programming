/**
Input              5

Output             1
                 2 1 2
               3 2 1 2 3
             4 3 2 1 2 3 4
           5 4 3 2 1 2 3 4 5
**/

#include<stdio.h>
int main()
{
    int spa,i,j,n,k;
    while(scanf("%d",&n)!=EOF)
    {
        printf("\n\n");
        for(i=1;i<=n;i++)
        {
            for(spa=i;spa<n;spa++)
            {
                printf("  ");
            }
            for(j=i;j>0;j--)
            {
                printf("%d ",j);
            }
            for(k=2;k<=i;k++)
            {
                printf("%d ",k);
            }
            printf("\n");
        }
    }
}
