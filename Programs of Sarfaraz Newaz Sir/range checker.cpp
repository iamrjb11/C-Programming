#include <stdio.h>
int main()
{
    int x;
    int a;
    int b;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    if(x==2 || x==10)

        printf("The value is Undefined");

    else
    {
       a=(x-5)*(x+2)/(x-2);
       b=(x+10)*(x-7)/(x-10);
       if(a>x && x>b)
       printf("The value of x is satisfied");

    else
    {
        printf("The value is Unsatisfied");
    }

    }
}
