#include<stdio.h>

int main()
{
    int a,b,lcm,temp;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(int i=b;;i=i+b)
        {
            if(i%a==0)
            {
                lcm=i;
                break;
            }
        }
        printf("LCM=%d\n",lcm);
    }
}
