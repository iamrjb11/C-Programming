///* The 3n+1
/**
Input      1   10
           100 200
           201 210
           900 1000
Output
            1    10   20   // 1 - 10 er modde je numbr ta sob theke beshi ber gurse shi numbr ta...
                             Ex: 1=1;2=2;3=8;4=3;5=6;6=9;7=17;8=4;[9=20];10=7..... So 9=20 is maximum
            100  200  125
            201  210  89
            900  1000 174
**/

#include<stdio.h>
int main()
{
    int i,a,b,j,count,max,temp;
    while(scanf("%d%d",&a,&b)==2&&a>0&&b>0)
    {
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        max=0;
        printf("%d %d ",a,b);
        for(i=a;i<=b;i++)
        {
            count=1;
            for(j=i;j!=1;j=j)
            {
                if(j%2==0) j=j/2;
                else j=3*j+1;
                count+=1;
            }
            if(count>max) max=count;
        }
        printf("%d\n",max);
    }
    return 0;
}
