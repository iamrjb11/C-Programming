#include<stdio.h>
int pel(int n)
{
    int ch,rem,res,m;
    m=n;
    for(;;)
    {
        rem=n%10;
        n=n/10;
        res=res*10+rem;
        if(n==0) break;
    }
    if(res==m) ch=1;
    else ch=0;
    return ch;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(pel(n)==1) printf("Pellindrome\n");
    else printf("Not Pellindrome\n");
}
