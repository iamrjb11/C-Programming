///* Take 3 Different numbers & Create A Binnash

/** Input  2 56 50

    Output 2 56 50
           2 50 56
           56 2 50
           56 50 2
           50 2 56
           50 56 2

                    **/

#include<stdio.h>
int main()
{
    int i,j,k,temp,a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(b>c&&c>a)
        {
            temp=b;
            b=c;
            c=temp;
        }
        else if(c>a&&a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        else if(b>a&&a>c)
        {
            temp=a;
            a=c;
            c=b;
            b=temp;
        }
        else if(a>c&&c>b)
        {
            temp=c;
            a=b;
            c=a;
            b=temp;
        }
        else if(a>b&&b>c)
        {
            temp=a;
            a=c;
            c=temp;
        }
        for(i=a;i<=c;i++)
        {
            for(j=a;j<=c;j++)
            {
                for(k=a;k<=c;k++)
                {
                    if((i==a||i==b||i==c)&&(j==a||j==b||j==c)&&(k==a||k==b||k==c)&&i!=j&&j!=k&&k!=i)
                    {
                        printf("a=%d , b=%d , c=%d \n",i,j,k);
                    }
                }
            }
        }
    }
}

