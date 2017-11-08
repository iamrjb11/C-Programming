#include<stdio.h>
#define PI 3.14159265358979323846
int main()
{
    double tanx,prev,pow,fact,res,e,x,si,prev_term,sign,rest,factr,power,l,k,previ_term,i,j;
    printf("Enter a angle in degree:");
    scanf("%lf",&x );
    int X=x;
    if(x==90||x==270)
    {
        printf("Undefined");
    }
    else
    {
        res=0;
        int a=x/360;
        x=x-a*360;
        e=x*PI/180.0;
        si=1;
        for( i= 1; ; i+=2)
        {
            pow=1,  fact=1;;
            for( j=1; j<=i; j++)
            {
                pow=pow*e;
                fact=fact*j;
            }
            res=res+(pow/fact*si);
            si=si*(-1);

            if(prev_term==pow/ fact)
            {
                break;
            }
            prev_term=pow/fact;
        }
        printf("%0.3lf",res);
        sign=-1;
         rest=1;
        for(l=2;; l+=2)

        {
            power=1,factr=1;
            for(k=1; k<=l; k++)
            {
                power=power*e;
                factr=factr*k;
            }
            rest=rest+(power/factr*sign);
            sign=sign*(-1);

            if(previ_term==power/factr)
            {
                break;
            }
            previ_term=power/factr;
        }
        printf("\n%0.3lf\n",rest);
        printf("tan(%d):%0.3lf\n",X,res/rest);
    }
}



