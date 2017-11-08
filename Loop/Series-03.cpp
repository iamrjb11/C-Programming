///   1^3 + 2^3 + 3^3 + 4^3 + ...............
#include<stdio.h>
//#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        //      sum=sum+pow(i,3);
        int rem=1;
        for(int j=1;j<=3;j++)
        {
            rem=rem*i;
        }
        sum=sum+rem;
    }
    printf("Sum=%d\n",sum);
}
