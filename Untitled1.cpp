#include<stdio.h>
int main()
{
    int a,b,T=1;
    while(scanf("%d %d",&a,&b)&&a>-1&&b>-1&&T<201)
    {
        int temp,check,ans;
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
            
        }
        check=a-b;
        if(check<=50) ans=a-b;
        else ans=(100+b)-a;
        printf("%d\n",ans);
        T++;
    }
}
