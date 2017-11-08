///  e^x=1 + x + x^2/2! + x^3/3! + x^4/4! + ..............

#include<stdio.h>
int main()
{
    double x;
    printf("e^");
    while(scanf("%lf",&x)!=EOF)
    {
        double res=0,fac,pow,pre_term=100000;
        for(int i=0;;i++)
        {
            fac=1,pow=1;
            for(int j=1;j<=i;j++)
            {
                pow=pow*x;
                fac=fac*j;
            }
            res=res+(pow/fac);
            printf("pod %d pow=%lf fac=%lf pre_term=%lf , res=%lf\n",i,pre_term,res);
            if(pre_term==res) break;
            pre_term=res;
        }
        printf("%lf\n\n",res);
        printf("e^");
    }
}
