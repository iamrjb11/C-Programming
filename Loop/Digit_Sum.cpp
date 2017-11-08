/**
Input 1234
      569827
Output 4+3+2+1
       Sum = 10
       Number of loops : 4
       7+2+8+9+6+5
       Sum = 37
       Number of loops : 6
**/

#include<stdio.h>
int main()
{
    int rem,sum,i,n;
    while(scanf("%d",&n)!=EOF)
    {
        rem=0,sum=0;
        for(i=1;;i++)
        {
            rem=n%10;
            n=n/10;
            sum=sum+rem;
            printf("%d ",rem);
            if(n==0)
            {
                break;
            }
            printf("+ ");
        }
        printf("\nSum : %d\nNumber of loops : %d\n",sum,i);
    }
}
