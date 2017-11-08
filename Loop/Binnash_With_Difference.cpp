/**
Input         4 8 12   4 // last 4 is difference... Ex:8-4=4;12-8=4;

Output      a=4 , b=8 , c=12
            a=4 , b=12 , c=8
            a=8 , b=4 , c=12
            a=8 , b=12 , c=4
            a=12 , b=4 , c=8
            a=12 , b=8 , c=4

**/

#include<stdio.h>
int main()
{
    int a,b,c,start,end,dif,temp,mid,i;
    scanf("%d%d%d%d",&start,&mid,&end,&dif);

    if(start>mid&&mid>end)
    {
     temp=start;
     start=end;
     end=temp;
    }
    else if(mid>end&&end>start)
    {
        end=mid;
    }
    else if(start>end&&end>mid)
    {
        end=start;
        start=mid;
    }
    else if(end>start&&start>mid)
    {
        start=mid;
    }
    else if(mid>start&&start>end)
    {
        start=end;
        end=mid;
    }
    for(a=start;a<=end;a=a+dif)
    {
        for(b=start;b<=end;b=b+dif)
        {
            for(c=start;c<=end;c=c+dif)
            {
                if(a!=b&&b!=c&&c!=a)
                {
                    printf("a=%d , b=%d , c=%d\n",a,b,c);
                }
            }
        }

    }
}
