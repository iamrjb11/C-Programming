/**
Input    5

Output   A
         BC
         DEF
         GHIJ
         KLMNO
**/

#include<stdio.h>
int main()
{
    int i,j,n;
    char c;
    while(scanf("%d",&n)==1)
    {
        c='A';
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%c",c);
                c++;
            }
            printf("\n");
        }
    }
}
