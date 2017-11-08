/**
Input 7
      5
Means 7+77+777+7777+77777+777777+7777777
      5+55+555+5555+55555
Output Sum =8641969
       Sum =61725
**/

#include<stdio.h>
int main()
{
    int n,i,rem,sum;
    printf("Enter : ");
    while(scanf("%d",&n))
    {
        rem=0;
        sum=0;
        printf("Seris : ");
        for(i=1;i<=n;i++)
        {
            rem=rem*10+n;
            sum=sum+rem;
            printf("%d",rem);
            if(i!=n) printf("+");
        }
        printf("\nTotal Sum is : %d\n",sum);
        printf("Enter : ");
    }
}
