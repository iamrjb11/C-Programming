//series//
#include <stdio.h>
int main()
{
    int n,x,s=0;
    printf("N th term numbers\n");
    scanf("%d", &n);
    printf("Enter the number\n");
    scanf("%d", &x);
    for(;n>0;n--,x*=10)
    {
       s+=n*x;
    }
    printf("%d",s);

}

