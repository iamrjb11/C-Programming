#include<stdio.h>

int main()
{
    int i,n;
    long a[100];
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("\n");
    a[0]=1;
    a[1]=1;
    for(i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    for(i=0; i<n; i++)
    {
        printf("%ld  ",a[i]);
    }
    printf("\n");

}
