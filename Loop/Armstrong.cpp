//150211
/** Armstrong Or NOT
Input 153 / 370
Working 1^3+5^3+3^3 =153
Output Armstrong
**/
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    m=n;
    int i,j,k;
    for(i=1;;i++)
    {
        n=n/10;
        if(n==0) break;
    }
    int ans=0,ch,rem,rem2;
    ch=m;
    for(j=1;j<=i;j++)
    {
        rem=m%10;
        m=m/10;
        int rem2=1;
        for(k=1;k<=i;k++)
        {
            rem2=rem2*rem;
        }
        ans=ans+rem2;
    }
    if(ans==ch) printf("arms\n");
    else printf("Not arms\n");
}
