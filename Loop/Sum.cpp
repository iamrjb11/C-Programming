///* Take n Integer as Input & Print Their Sum

/** Input Formet    n
                 n1 n2 n3......
    Output Formet_ Sum = N


Simple Input     5     // '5'- Ami Koyta Number nibo & Oi Koyta Number er Sum Ber Korbo......Ati Test Case Nahhhh
             3 7 3 5 18       // Number Gilo

Simple Output 36       // Sum
                  **/


#include<stdio.h>
int main()
{
    int a,b,sum=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
        printf("%d ",sum);
        if(i==n)
        {
            printf("\n");
        }
    }
    printf("Sum=%d\n",sum);
}
