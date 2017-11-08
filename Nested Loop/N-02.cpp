///* Star Shape 1 Exmple
/**
Input      5

Output     1
           2 3
           4 5 6
           7 8 9 10
           11 12 13 14 15
                          **/


#include<stdio.h>
int main()
{
    int i,j,k,n,a;
    while(scanf("%d",&n)!=EOF)
    {
        a=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                a=a+1;
                printf("%d ",a);
            }
            printf("\n");
        }
    }
}
