/** series :  1-x^2/2!+x^4/4!-x^6/6!.........**/

#include<stdio.h>
#define PI 3.14152653589
int main()
{
    double a,prev_term,res,pow,fact,x,sign;
    int i,j;
    printf("Enter the Angle in degree:");
    while (scanf("%lf",&a)==1)
    {
        res=1;
        int s=a/360;
        a=a-s*360;
        x=PI*a/180;
        sign=-1;
        for(i=2;; i+=2)

        {
            pow=1,fact=1;
            for(j=1; j<=i; j++)
            {
                pow=pow*x;
                fact=fact*j;
            }
            res=res+(pow/fact*sign);
            sign=sign*(-1);

            if(prev_term==pow/fact)
            {
                break;
            }
            prev_term=pow/fact;
        }
        printf("%0.4lf\n",res);
    }
}
