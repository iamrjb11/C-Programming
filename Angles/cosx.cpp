#include<stdio.h>
int main()
{
    double d,x,cosx;
    while(scanf("%lf",&d)==1)
    {
        int a=d/360;
        d=d-a*360;
        x=(d*(3.1415926535897932384626433832795))/180;
        double res=0,fac,pow,pre_term=100000,sign=1;
        for(int i=0;;i+=2)
        {
            fac=1,pow=1;
            for(int j=1;j<=i;j++)
            {
                pow=pow*x;
                fac=fac*j;
            }
            res=res+(pow/fac)*sign;
            if(pre_term==(pow/fac)) break;
            pre_term=pow/fac;
            sign=sign*(-1);
        }
        /*int c=cosx==1;
        printf("%d\n",c);*/
        printf("%.3lf\n",res);
    }
}
