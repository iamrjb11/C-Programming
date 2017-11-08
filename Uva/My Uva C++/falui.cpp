#include<stdio.h>
#include<math.h>
int main()
{
    double n,p;
    double rem;
    while(scanf("%lf %lf",&n,&p)==2)
    {
        rem=pow(p,1/n);
        printf("%.0lf\n",rem);
    }
}
