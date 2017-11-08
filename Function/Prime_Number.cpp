/// Prime Number

#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,ch=1;
    if(n==1||n==0) ch=0;
    else if(n==2) ch=1;
    else if(n%2==0) ch=0;
    else
    {
        for(i=3;i<=sqrt(n);i=i+2)
        {
            if(n%i==0)
            {
                ch=0;
                break;
            }
        }
    }
    return ch;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    while(scanf("%d",&n)&&n>=0)
    {
        if(prime(n)==1) printf("Prime\n\n");
        else printf("Not Prime\n\n");
        printf("Enter a Number : ");
    }
}
