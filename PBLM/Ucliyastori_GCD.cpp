/**
Input      142 60
Output     GCD is 2
            140 60
            Gcd is 20
**/


#include<stdio.h>
int main()
{
    int x,y,work,output,temp;
    while(scanf("%d%d",&x,&y)==2)
    {
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        printf("%d %d\n",x,y);
        for(;;)
        {
            output=x%y;
            printf("Output : %d\n",output);
            if(output==0)
            {
                printf("GCD is %d\n",y);
                break;
            }
            x=y;
            y=output;
        }
    }
    return 0;
}
