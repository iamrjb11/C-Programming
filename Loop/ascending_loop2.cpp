/// Print All Integer Between m & n in Ascending Order

/// Simple Input 6 12
/// Simple Outout 6 7 8 9 10 11 12

/// Input 6 2
/// Output 2 3 4 5 6




#include<stdio.h>
int main()
{
    int a,b,a1,b1;
    while(scanf("\n%d%d",&a1,&b1))
    {
        for(a=a1,b=b1;a1>=b1;b++)
        {
            printf("%d ",b);
            if(a==b)
            {
                break;
            }
        }
        for(a=a1,b=b1;a1<=b1;a++)
        {
            printf("%d ",a);
            if(a==b)
            {
                break;
            }
        }
    }
}
