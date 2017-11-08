#include<stdio.h>
int main()
{
     int i,j,k,n,l;
     printf("\nEnter the no lines to be printed: ");
     scanf("%d",&n);
     printf("\n\n");
     for(i=0;i<n;i++)
     {
         for(j=n-i;j>0;j--) printf(" ");
         for(k=i;k>0;k--)
         {
             printf("%d ",k);
         }
         for(l=2;l<=i;l++)
         {
             printf("%d ",l);
         }
         printf("\n");
         }
}
