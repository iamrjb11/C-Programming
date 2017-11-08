#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n+1-i; j++)
        {
            printf("*");
        }
        for(int k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(int l=1;l<=i-1;l++)
        {
            printf(" ");
        }
        for(int m=1;m<=n+1-i;m++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int l=1;l<=n-i;l++)
        {
            printf(" ");
        }
        for(int m=1;m<=i;m++)
        {
            printf("*");
        }
        printf("\n");
    }




}
