/// * Fibonacci Number 1 1 2 3 5 8 13 21...........

/// Simple Input  3
///               2
///               8

/// Simple   Output  1 1 2
///                  1 1
///                  1 1 2 3 5 8 13 21


#include<stdio.h>
int main()
{
    int a,b,c,n,j;
    scanf("%d",&n);
    a=1,b=1;
    for(j=1;j<=n;j++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;

    }
    return 0;
}

