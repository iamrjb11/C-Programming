#include <stdio.h>

int main()
{
    int a,b,i;
    printf("enter two integers \n");
    scanf("%d %d", &a,&b);
    if(a==0 || b==0)
    {
        printf("Undefined\n");
    }
    else
    {
        if(a<b)
        {
            int temp = b;
            b = a;
            a = temp;
        }
        for(i=a; ; i+=a)
        {
            if(i%b==0)
            {
                break;
            }
        }
        printf("LCM of two numbers : %d",i);
    }

}
