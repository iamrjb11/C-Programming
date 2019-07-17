/**
    Input      Output
   0    0    math error
   0   -2    math error
   0    3        0
   2    0        2
  -3    0       -1
   2    3        8
   3   -2        0.1111
  -2    3       -8
  -3   -2       -0.1111
*/

#include<stdio.h>
int main()
{
    double b,p,i;
    double ans,y;
    int sign,sz;
    printf("--- Pow Function [pow(x,y)] ---\n\nEnter Base : Power : ");
    while(scanf("%lf %lf",&b,&p)!=EOF)
    {
        if(b>=0) sign=1;

        else sign=-1;
        if(p<0) sz=-1*p;
        else sz=p;


        if(b==0&&p<=0) printf("Math Error !\n");
        else{
            ans=sign;
            for(i=1;i<=sz;i++){
                ans=ans*sign*b;
            }

            if(p>=0) printf("Ans : %d\n",(int)ans); /// p is positive
            else printf("Ans : %lf\n",1/ans); /// p is negative

        }

        printf("Enter Base : Power : ");
    }
    return 0;
}
