/// * Fibonacci Number 0 1 1 2 3 5 8 13 21...........

/// Simple Input Test Case 3
///                  Input 2
///                        6
///                        8

/// Simple   Output        1
///                        5
///                        13


#include<stdio.h>
int main()
{
    int a,b,c,t,i,n,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        a=0,b=1;
        for(j=1;j<=n;j++)
        {
            if(j==n)
            {

                printf("%d\n",a);

            }
            c=a+b;
            a=b;
            b=c;
        }
    }
}
