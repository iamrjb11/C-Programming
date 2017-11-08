#include<stdio.h>
int main()
{
    int n,a,b,c,p,q,r,m,rem2;
    printf("((a*X^p)+b*((Y)*(X^q)))^n\n");
    printf("a:b:p:q:n:");
    scanf("%d%d%d%d%d",&a,&b,&p,&q,&n);
    printf("X^?????");
    scanf("%d",&m);
    r=((n*p-m)/(p-q)); //0*2-8=12/
    rem2=n-r;
    printf("r tomo  pod is : %d\n",r);
    printf("X^%d is = %d^C_%d (%d)^%d (%d)^%d",m,n,r,a,rem2,b,r);
}
