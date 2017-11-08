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
#include<math.h>
int main()
{
    int n,i,j,check;
    while(scanf("%d",&n))
    {

        check=1;
        if(n==1||n==0)
        {
            check=0;
        }
        else if(n==2) check=1;
        else if(n%2==0) check=0;
        else
        {
            for(i=3;i<=sqrt(n);i=i+2)
            {
                if(n%i==0)
                {
                    check=0;
                }
            }
        }
        if(check==1) printf("%d is prime\n",n);
        else if(check==0) printf("%d is not prime\n",n);
    }
}
