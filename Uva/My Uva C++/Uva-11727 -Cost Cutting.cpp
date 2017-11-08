#include<stdio.h>
long long int surv(long long int a[])
{
    int i,j;
    long long int suv=a[0],temp;
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a[1];
}
int main()
{
    int T,cas=1;
    scanf("%d",&T);
    long long int a[100];
    while(T--)
    {
        int i;
        for(i=0;i<3;i++)
        {
            scanf("%lld",&a[i]);
        }
        printf("Case %d: %lld\n",cas,surv(a));
        cas++;
    }
}
