                /// Uva - Light , more light

#include<stdio.h>
#include<math.h>
int main()
{
    long long number,x;
    while(scanf("%lld",&number)==1)
    {
        if(number==0)
        {
            break;
        }
        x=sqrt(number);
        if(x*x==number)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}
