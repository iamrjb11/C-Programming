#include<stdio.h>
#include<math.h>
int main()
{
    float u,v,t,s,a,c1,c2,c3;
    int cas=1,n;
    while(scanf("%d",&n)&&n>0)
    {
        scanf("%f %f %f",&c1,&c2,&c3);
        if(n==1)
        {
            u=c1,v=c2,t=c3;
        }
        else if(n==2)
        {
            u=c1,v=c2,a=c3;
        }
        else if(n==3)
        {
            u=c1,a=c2,s=c3;
        }
        else if(n==4)
        {
            v=c1,a=c2,s=c3;
        }
        if(n==1)
        {
            a=(v-u)/t;
            s=u*t+0.5*a*t*t;
            printf("Case %d: %.3f %.3f\n",cas,s,a);
        }
        else if(n==2)
        {
            t=(v-u)/a;
            s=u*t+0.5*a*t*t;
            printf("Case %d: %.3f %.3f\n",cas,s,t);
        }
        else if(n==3)
        {
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",cas,v,t);
        }
        else if(n==4)
        {
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",cas,u,t);
        }
        cas++;

    }
}
