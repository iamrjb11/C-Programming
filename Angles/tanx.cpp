/// tanx= sinx/cosx

#include<stdio.h>
int main()
{
    double d,x,sinx,cosx,tanx;
    printf("tan");
    while(scanf("%lf",&d)==1)
    {

        int a=d/360;
        d=d-a*360;
        x=(d*3.14159246)/180;
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
        sinx=res;
        printf("sinx=%lf\n",res);
        double res2=0,sign2=1;
        for(int i=0;;i+=2)
        {
            fac=1,pow=1;
            for(int j=1;j<=i;j++)
            {
                pow=pow*x;
                fac=fac*j;
            }
            res2=res2+(pow/fac)*sign2;
            if(pre_term==(pow/fac)) break;
            pre_term=pow/fac;
            sign2=sign2*(-1);

        }
        cosx=res2;
        printf("cosx=%lf\n",cosx);
        int c=cosx==0;
        printf("%d\n",c);
       /*if(cosx==0.00000)
        {
            printf("Math Error !\n");
            continue;
        }
        tanx=sinx/cosx;
        printf("tanx=%0.3lf\n\n",tanx);*/
        printf("tan");
    }
}


