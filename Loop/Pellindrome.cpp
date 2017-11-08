/**
Input    1221
         23518
         12321
Output Pellindrome     (1221)
       Not Pellindrome (81532)
       Pellindrome     (12321)
**/

#include<stdio.h>
int main()
{
    int n,i,rem,ans,m;
    while(scanf("%d",&n)!=EOF)
    {
        m=n;
        ans=0;
        for(i=1;;i++)
        {
            rem=n%10;
            n=n/10;
            ans=ans*10+rem;
            if(n==0)
            break;
        }
        printf("Reverse Number is : %d\n",ans);
        if(ans==m) printf("Pelliondrome\n");
        else printf("Not Pelliondrome\n");
    }
}
