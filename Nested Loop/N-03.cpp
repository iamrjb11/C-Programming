///* Star Shape 1 Exmple-2
/**
Input      5

Output     1
           2 2
           3 3 3
           4 4 4 4
           5 5 5 5 5
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
             a=a+1;
            for(j=1;j<=i;j++)
            {

                printf("%d ",a);
            }
            printf("\n");

        }
    }
}
