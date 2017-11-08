/// Print All Integer Number Between m & n in Ascending Order

/// Simple Input 6 12
///        Output 6 7 8 9 10 11 12

/// Simple Input 6 2
///       Output 2 3 4 5 6


#include<stdio.h>
int main()
{
    int a,b,i;
    while(scanf("%d%d",&a,&b))
    {
        for(i=a;i<=b;i++)
        {
            printf("%d ",i);
            if(i==b)
            {
                printf("\n");
            }
        }
        for(i=b;i<=a;i++)
        {
            printf("%d ",i);
            if(i==a)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
