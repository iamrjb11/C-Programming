#include<stdio.h>
int main()
{
    int bin=0,deci,m,a=1,rm;
    printf("Decimal:");
    scanf("%d",&deci);
    m=deci;
    while(deci!=0)
    {
        rm=deci%2;
        bin=bin+rm*a;
        a=a*10;
        deci=deci/2;
    }
    printf("Decimal:%d is to Binary:%d\n",m,bin);
    return 0;
}
