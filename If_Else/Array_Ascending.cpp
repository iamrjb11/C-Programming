#include<stdio.h>
int main()
{
    int ara[100],i,j,k,n,temp;
    printf("Enter number of data : ");
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
                printf("\n");
                for(k=0;k<n;k++)
                {
                    printf("%d ",ara[k]);
                }
                 printf("\n");
            }
            printf("\n");
        }
        printf("Enter number of data : \n");
    }
}
