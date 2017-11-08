///* Star Shape 1 Exmple-3
/**
Input      5

Output     1
           2 1
           3 2 1
           4 3 2 1
           5 4 3 2 1
                          **/


#include<stdio.h>
int main()
{
    int i,j,k,n,a;
    while(scanf("%d",&n)!=EOF&&n>0)
    {
        for(i=1;i<=n;i++)
        {

            for(j=i;j>0;j--)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
    }
}
