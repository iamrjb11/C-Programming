#include<stdio.h>
#include<math.h>

int main()
{
    long int i,j,n,t,p,a[10000];
    int is_prime;
    printf("How many prime numbers:  ");
    scanf("%ld",&n);
    printf("\n");
    p=0;
    for(i=2; p<n; i++)
    {
        is_prime=1;
        //t=sqrt(i);
        for(j=2; j<=sqrt(i); j++)
            if(i%j==0)
            {
                is_prime = 0;
                break;
            }
        if(is_prime==1)
        {
            a[p++]=i;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%ld  ",a[i]);
    }
    printf("\n");
}

