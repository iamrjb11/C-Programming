#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i=1;i<=n;i++)
        {
            printf("\t");
            for(int j=1;j<=i-1;j++)printf(" ");
            for(int k=1;k<=i;k++)printf("*");
            printf("\n");

        }
        for(int l=1;l<n;l++)
        {
            printf("\t");
            for(int m=1;m<=n-1-l;m++)printf(" ");
            for(int o=1;o<=n-l;o++)printf("*");
            printf("\n");
        }
    }
}
