// Akta Range User Theke Nite hobe and found korte hobe er modde konta konta prefect number ...........
/**
Input 8
Output  Perfect Number = 6 // '6'  1,2,3 dhara vag jaye tai 1+2+3=6
Input 56
Output Perfect Number = 6
       Perfect Number = 28
**/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,ch;
    ch=0;
    for(i=1;i<=n;i++)
    {
        int sum=0;
        for(j=1;j<i;j++)
        {
                                           //printf("i=%d ,j=%d ,",i,j);
            if(i%j==0) sum=sum+j;
                                         //printf("sum=%d\n",sum);
        }
        if(sum==i)
        {
            printf("Perfect Number = %d\n",sum);
            ch=1;
        }
    }
    if(ch==0) printf("Not Found\n");
}
