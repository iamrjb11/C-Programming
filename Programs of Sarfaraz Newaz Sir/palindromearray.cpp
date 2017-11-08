#include<stdio.h>
int main()
{
    int i,j,temp,ara[100],n,res=0;
    scanf("%d", &n);
    temp=n;
    for(i=0; ; i++)
    {
        ara[i]=n%10;
        n=n/10;
        if(n==0)
        {
            break;
        }
    }
    for(j=0; j<=i; j++)
    {
        res = res*10 + ara[j];
    }
    if(res==temp)
    {
        printf("%d is palindrome\n",temp);
    }
    else
    {
        printf("%d is not palindrome",temp);
    }


}
