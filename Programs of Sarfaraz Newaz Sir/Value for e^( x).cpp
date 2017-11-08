
/** SERIES :1+x+x/1!+x^2/2!+x^3/3!......**/
#include<stdio.h>

int main()
{
    double a,prev,pow,fact,res;
    while((scanf("%lf",&a)==1))
    {
        prev=1;
         res=1;
        for(int i=1;; i++)
        {
            pow=1,fact=1;
            for(int j=1; j<=i; j++)
            {
                pow=pow*a;
                fact=fact*j;
            }
            res=res+pow/fact;
            if(prev==res)
            {
                break;
            }
            prev=res;
        }
        printf("The value of e^(x) is :%lf\n",res);
    }
}
