///* Prime Number
/**
Input   3        // '3' Prime Or Not ??????
Output  Prime
Input   8
Output   Not Prime
Input   19
Output  Prime
Input   22
Output  Not Prime
                    **/

#include<stdio.h>
int main()
{
    int check,i,a;
    while(scanf("%d",&a)!=EOF)
    {
        check=1;
        if(a==1)
        {
           check=0;
        }
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                check=0;
            }

        }
        if(check==1)
        {
            printf("Prime Number\n");
        }
        else
        {
            printf("Not Prime\n");
        }
    }
    return 0;
}
