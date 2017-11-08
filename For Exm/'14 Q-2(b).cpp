/**  Batch '14  Q-2(b)
Input  9835
output  9835
        835
        35
        5
**/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,rem,res=0;
    printf("%d\n",n);
    for(i=1;;i++)
    {
        rem=n%10;
        n=n/10;
        res=res*10+rem;
        if(n==0) break;
    }
    int n2,rem2;
    for(j=1;j<i;j++)
    {
        rem2=0;
        res=res/10;
        n2=res;
        for(;;)
        {
            rem=n2%10;
            n2=n2/10;
            rem2=rem2*10+rem;
            if(n2==0) break;
        }
        printf("%d\n",rem2);
        //printf("%d\n",res);
    }
}
