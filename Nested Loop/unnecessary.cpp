#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i=1;i<=n;i++)
        {
            printf("\t");
            for(int j=1;j<=n-i;j++)printf("  ");
            printf("* ");
            for(int k=1;k<=2*(i-1)-1;k++)printf("  ");
            if(i!=1)printf("* ");
            printf("\n");
        }
        for(int l=1;l<n;l++)
        {
            printf("\t");
            for(int m=1;m<=l;m++)printf("  ");
            printf("* ");
            for(int o=1;o<=(n-1-l)*2-1;o++)printf("  ");
            if(l!=n-1)printf("* ");
            printf("\n");
        }

    }
}
