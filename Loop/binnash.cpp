//* Binnash *//

#include<stdio.h>
int main()
{
    int a,b,c,sum=0;
    for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
                for(c=1;c<=3;c++){
                    if(c!=b&&c!=a&&a!=b)
                    {
                        printf("a=%d,b=%d,c=%d\n",a,b,c);
                        sum=sum+a+b+c;
                    }
                }
            }
        }

    printf("sum:%d",sum);
    return 0;
}
