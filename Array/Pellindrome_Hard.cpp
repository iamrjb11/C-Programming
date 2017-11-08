///     Pellindrome
// input       12345654321
// output      Pellindrime
// input       1264684821
// output    Nto Pellindrime

#include<stdio.h>
int main()
{
    long long int n,ch,a[100000],i,j,k;
    while(scanf("%lld",&n)!=EOF)
    {
        for(i=0;;i++)
        {
            a[i]=n%10;
            n=n/10;
                                                    //printf("a[%lld] is %lld\n",i,a[i]);
            if(n==0)
            {
                break;
            }
        }
                                                   //printf("i=%lld save=%lld\n",i+1,save);
        ch=1;
        k=i;
        for(j=0;j<=i/2;j++,k--)
        {                                          //printf("a[%lld]=%lld ! = a[%lld]=%lld\n",j,a[j],k,a[k]);
                if(a[j]!=a[k])
                {
                    ch=0;
                    break;
                }
                                                 //printf("ch=%lld\n",ch);
        }
                                                //printf("j=%d\n",j);
        if(ch==1) printf("pell\n");
        else printf("Not Pell\n");
    }
}
