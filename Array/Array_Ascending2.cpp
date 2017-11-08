/**
Input        5      // Koto-gulo Number Niye Kaj Korbo
         5 2 3 1 4  // Number golo
Output   1 2 3 4 5  // Ascending Order

Input       5
         8 2 3 6 -8
Output   -8 2 3 6 8

**/

#include<stdio.h>
int main()
{
    int ara[10],i,j,n,k,temp;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(ara[i]>ara[j])
                {
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }
        }
        for(k=0;k<n;k++)
        {
            printf("%d ",ara[k]);
        }
        printf("\n\n");

    }
}
