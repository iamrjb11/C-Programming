#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    printf("Input A Phone Number:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k);
    if(a==0&&b==1&&c==6)
    {
        printf("You are Calling a Aritle Number\n");
    }
    else if(a==0&&b==1&&c==8)
    {
        printf("You are Calling a Robi Number\n");
    }
    else if(a==0&&b==1&&c==7)
    {
        printf("You are Calling a GP Number\n");
    }
    else if(a==0&&b==1&&c==9)
    {
        printf("You are Calling a Banglalink Number\n");
    }
    else if(a==0&&b==1&&c==5)
    {
        printf("You are Call a TeleTalk Number\n");
    }
    else if(a==0&&b==1)
    {
        printf("You are Calling Another Oparetore\n");
    }
    else
    {
        printf("Your Number Is Invalid\n");
    }
    return 0;
}
