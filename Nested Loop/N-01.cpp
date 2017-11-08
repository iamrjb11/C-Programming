///* Star Shape ====
/**
Input 3
Output *
       **
       ***
       Input 5      // EOF=End Of File ......(^Z)
       Output *
              **
              ***
              ****
              *****
              Input 6
              Output *
                     **
                     ***
                     ****
                     *****
                     ******

                                **/

#include<stdio.h>
int main()
{
    int a,n,i,j;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
