//150217//
#include<stdio.h>

int main()
{
    int i,j,n,rem,rem2,ch=0,ch2=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for( i=(n-1);i>1;i--)
    {
        rem = n%i;
        if(rem==0)
        {
            for(j=2;j<i;j++)
            {
                rem2=i%j;
                if(rem2==0)
                {
                    ch=1;
                    break;
                }

            }
            if(ch==0)
            {
                ch2=1;
                printf("%d",i);
                break;
            }
            ch=0;
        }
    }
    if(ch2==0)
    {
        printf("No real Factor\n");
    }
}
