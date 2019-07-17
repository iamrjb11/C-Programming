#include<stdio.h>
int main()
{
    int n,i,j,n2,n3,rm,rm2;
    printf("--- Decimal to Binary Conversion ---\nEnter : ");
    while(scanf("%d",&n)!=EOF)
    {
        n2=0,n3=0;
        for(i=1;;i++)
        {
            rm=n%2;
            n=n/2;
            n2=n2*10+rm;
            if(n==0) break;
        }
            printf("%d\n",n2);
        for(j=1;j<=i;j++)
        {
            rm2=n2%2;
            n2=n2/2;
            n3=n3*10+rm2;
            if(n2==0) break;
        }
        printf("Real %d\n\nEnter : ",n3);
    }
}
