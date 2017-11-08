/**
Input   12345
Output   2 3 5    // je gulo prime number
Input   347927
Output  3 7 2 7
**/


#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,j,rem,check,save;
    while(scanf("%d",&num)&&num>0)
    {
        save=0;
        for(i=1;;i++)
        {
            rem=num%10;
            num=num/10;
            save=save*10+rem;
            if(num==0)
            break;
        }
        for(j=i;j>0;j--)
        {
            rem=save%10;
            save=save/10;
            check=1;
            if(rem==1) check=0;
            for(i=2;i<rem;i++)
            {
                if(rem%i==0)
                {
                    check=0;
                    break;
                }
            }
            if(check==1) printf("%d ",rem);
        }
        printf("\n");
    }
}
