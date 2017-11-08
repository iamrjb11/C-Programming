/**  Armostrong Number
*/
#include<stdio.h>
int armostrng(int n)
{
    int rem,i,j,k;
    int m=n,check=n,ch;
    for(i=1;;i++)
    {
        rem=m%10;
        m=m/10;
        if(m==0) break;
    }
    int sum=0,mul;
    for(j=1;j<=i;j++)
    {
        rem=n%10;
        n=n/10;
        mul=1;
        for(k=1;k<=i;k++)
        {
            mul=mul*rem;
        }
        sum=sum+mul;
    }
    if(sum==check) ch=1;
    else ch=0;
    return ch;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(armostrng(n)==1) printf("%d is Armostrong Number\n",n);
    else printf("%d is Not Armostrong Number\n",n);
}
