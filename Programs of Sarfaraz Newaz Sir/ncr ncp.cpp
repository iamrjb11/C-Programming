#include<stdio.h>
int main()
{
    long int n,r,ncr=1,npr=1,n_fact=1,r_fact=1,nr_fact=1;
    scanf("%ld %ld",&n,&r);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        n_fact*=i;
    }
    for(int j=1;j<=n-r;j++)
    {
        nr_fact*=j;
    }
    for(int k=1;k<=r;k++)
    {
        r_fact*=k;
    }
    npr=n_fact/nr_fact;
    ncr=n_fact/(nr_fact*r_fact);
    printf("%ldP%ld=%ld\n\n%ldC%ld=%ld\n",n,r,npr,n,r,ncr);
}
