//* Merit Position *//

#include<stdio.h>
int main()
{
    printf("What is your Merit Position?????\n=");
    int n;
    while(scanf("%d",&n))
    {
        if(n%4==0)
        {
            printf("Send to 'D'..\n");
        }
        else if(n%4==1)
        {
            printf("Send to 'A'..\n");
        }
        else if(n%4==2)
        {
            printf("Send to 'B'..\n");
        }
        else
        {
            printf("Send to 'C'..\n");
        }
    }
    return 0;
}
