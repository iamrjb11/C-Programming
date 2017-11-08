/// Advance Loop ..... Sum

/**
Simple Input        4     // '4' Test Case Number .....Koyber Ei Prog. ta Test Korte ChaO....?????
                    3    // '3'- Ami Koyta Number nibo ??? & Oi Koyta Number er Sum Ber Korbo......Ati Test Case Nahhhh
                  2 5 3   // Number Gilo
    Output         10    // Sum

    Input            6
                2 5 4 12 7 8
    Output          38

    Input           2
                   3 71
    Output          74

    Input           4
                 1 2 5 12
    Output          20
                            **/


#include<stdio.h>
int main()
{
        int n,a,T,i,j,sum;
        scanf("%d",&T);
        for(i=1;i<=T;i++)
        {
            scanf("%d",&n);
            sum=0;
            for(j=1;j<=n;j++)
            {
                scanf("%d",&a);
                sum=sum+a;
            }
            printf("Sum:%d\n",sum);
        }
}
