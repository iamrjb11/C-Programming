#include<stdio.h>
#include<math.h>
int perfect(int n)
{
    long long int j,ch=1;
    if(n==1) ch=0;
    else if(n==2) ch=1;
    else if(n%2==0) ch=0;
    else
    {
        for(j=3;j<=sqrt(n);j+=2)
        {
            if(n%j==0)
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
    long long int p[100];
    long long int n,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld,",&p[i]);
        long long int x,y,work1,work2;
        work1=p[i];
        x=perfect(work1);
        work2=pow(2,p[i])-1;
        y=perfect(work2);
        if(x==1&&y==1) printf("Yes\n");
        else printf("No\n");

    }
}
