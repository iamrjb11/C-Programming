#include<stdio.h>

int main()

{
    int n,i,j,k,rem,c,res,num,number,ans;

    while(scanf("%d",&number)==1)
    {
        if(number<0)
        {
            break;
        }
        res=0;
        n=number;
        num=number;

        for(i=1;; i++)
        {
            rem=n%10;
            n/=10;
            c=i;
            if(n==0)
            {
                break;
            }
        }
        for(j=1; j<=c; j++)
        {
            rem=num%10;
            ans=1;
            for(k=1; k<=c; k++)
            {
                ans*=rem;
            }
            num/=10;
            res+=ans;
        }
        if(res==number)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }
}

