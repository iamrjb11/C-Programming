/// sinx=x-x^3/3!+x^5/5!-x^7/7!+x^9/9!- ..................

#include<stdio.h>
int main()
{
    double d,x;
    printf("sin");
    while(scanf("%lf",&d)==1)
    {
        int a=d/360;
        printf("%d\n",a);
        d=d-a*360;
        printf("%lf\n",d);
        x=d*(3.14152946)/180;
        printf("%lf\n",x);
        double res=0,pow,fac,pre_term=1000,sign=-1;
        for(int i=1;;i=i+2)
        {
            sign=sign*(-1);
            pow=1;
            fac=1;
            for(int j=1;j<=i;j++)
            {
                pow=pow*x;
                fac=fac*j;
            }
            res=res+(pow/fac)*sign;
            if(pre_term==pow/fac)
            {
                break;
            }
            pre_term=pow/fac;
        }
        printf("%0.3lf\n\n",res);
        printf("sin");
    }
}
  /**if(i%4==1)   // + hobe
        {
            res=res+pow/fac;
        }
        else            // - hobe
        {
            res=res-pow/fac;
        }**/
