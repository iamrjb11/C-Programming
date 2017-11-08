/**
    Input      Output
   0    0    math error
   0   -2    math error
   0    3        0
   2    0        2
  -3    0       -3
   2    3        8
   3   -2        0.1111
  -2    3       -8
  -3   -2       -0.1111
*/

#include<stdio.h>
int main()
{
    double b,p,i;
    double ans;
    printf("Enter Base : Power : ");
    while(scanf("%lf %lf",&b,&p)!=EOF)
    {
        ans=1;
        if(b==0&&p<=0) printf("Math Error !\n");
        else if(b==0&&p>0) printf("0\n");
        else if(b>0&&p==0) printf("1\n");
        else if(b<0&&p==0) printf("-1\n");
        else if(b>0&&p>0)
        {
            for(i=1;i<=p;i++)
            {
                ans=ans*b;
            }
            printf("%d\n",ans);
        }
        else if(b<0&&p>0)
        {
            for(i=1;i<=p;i++)
            {
                ans=ans*(-b);
            }
            printf("-%d\n",ans);
        }
        else if(b>0&&p<0)
        {
            for(i=1;i<=-p;i++)
            {
                ans=ans*b;
            }
            printf("%f\n",(float)1/ans);
        }
        else if(b<0&&p<0)
        {
            for(i=1;i<=-p;i++)
            {
                ans=ans*(-b);
            }
            printf("-%f\n",(float)1/ans);
        }
        printf("Enter Base : Power : ");
    }
    return 0;
}
