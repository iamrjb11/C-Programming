#include<stdio.h>
#define PI 3.141592
int main()
{
    printf("Enter the angle in degree: ");
    double d,x;
    scanf("%lf",&d);
    x=d*PI/180;
    int rem = x/(2*PI);
    x = x-(rem*2*PI);
    double res=0,pow,fac,prev_term=0;
    for(int i=1; ; i=i+2)
    {
        pow = 1;
        fac = 1;
        for(int j=1; j<=i; j++)
        {
            pow = pow*x;
            fac = fac*j;
        }
        if(i%4==1)
        {
            res = res + pow/fac;
        }
        else
        {
            res = res - pow/fac;
        }
        if(prev_term==pow/fac)
        {
            break;
        }
        prev_term = pow/fac;

    }
    printf("%lf",res);
}

