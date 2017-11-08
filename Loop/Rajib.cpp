//1502112
#include<stdio.h>
int main()
{
    int num,ch,i,j,output,fl;
    while(scanf("%d",&num)==1)
    {
        ch=1;
        fl=0;
        for(i=num/2;i>1;i--)
        {
            if(num%i==0)
            {

                for(j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                    {
                        ch=0;
                    }
                }
                if(ch==1)
                {
                    fl=1;
                    printf("%d",i);
                    break;
                }
            }
        }
       if(fl==0)
       {
           printf("No prime factor\n");
       }
    }
}


