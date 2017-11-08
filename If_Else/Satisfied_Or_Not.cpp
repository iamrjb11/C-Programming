//* Satisfied Or Not *//


#include<stdio.h>
int main()
{
    int x;
    printf("Input The Value of x:");
    scanf("%d",&x);
    float a,b;
    a=((x-5)*(x+2))/(x-2);
    b=((x+10)*(x-7))/(x-10);
    if(x<a&&x>b)
    {
        printf("Satisfied\n");
    }
    else
    {
        printf("Not Satisfied\n");
    }
    return 0;
}
