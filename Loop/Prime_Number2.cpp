///* Sum of Prime Numbers Between m & n

/** Simple Input  2         // Test Case.....
                 1 10
                 5 3

 Simple Output 2 3 5 7 // jegulo prime number .......
                17     // prime number er Sum......
                4      // Total prime numbers......
**/
#include<stdio.h>
int main()
{
    int chack,i,m,n,j,T,sum1,sum2,temp;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&m,&n);
        if(m>n)
        {
            temp=m;
            m=n;
            n=temp;
        }
        sum1=0,sum2=0;
        for(i=m;i<=n;i++){

            chack=1;
            if(i==1)
            {
                chack=0;
            }
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    chack=0;
                }

            }
            if(chack==1)
            {
                printf("%d ",i);
                sum1=sum1+i;
                sum2=sum2+1;
            }
        }
        printf("\nTotal Sum : %d\nPrime Numbers : %d\n",sum1,sum2);
    }
    return 0;
}
