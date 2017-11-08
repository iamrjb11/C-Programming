#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        int rem=i*(i+1);
        sum=sum+(float)1/rem;
    }
    printf("Sum=%0.3f\n",sum);
}
