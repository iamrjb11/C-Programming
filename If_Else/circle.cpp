#include<stdio.h>
int main()
{
    float a,b,r,x1,y1,z1;
    printf("Input The Value of a:");
    scanf("%f",&a);
    printf("Input The Value of b:");
    scanf("%f",&b);
    printf("Input The Value of Radius:");
    scanf("%f",&r);
    x1=2*a;
    y1=2*b;
    z1=(r*r)-(a*a+b*b);
    if(a>0&&b>0)
    {
        printf("\nX^2+Y^2-%fx-%fy=%f\n",x1,y1,z1);
    }
    else if(a<0&&b<0)
    {
        printf("\nX^2+Y^2+%fx+%fy=%f\n",-x1,-y1,z1);
    }
    else if(a>0&&b<0)
    {
        printf("\nX^2+Y^2-%fx+%fy=%f",x1,-y1,z1);
    }
    else if(a<0&&b>0)
    {
        printf("\nX^2+Y^2+%fx-%fy=%f",-x1,y1,z1);
    }
    else if(a==0&&b==0)
    {
        printf("\nX^2+Y^2=%f\n",z1);
    }
    else
    {
        printf("\nInput Error!\n");
    }
}
