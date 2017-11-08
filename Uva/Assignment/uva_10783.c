#include<stdio.h>

int main()
{
    int frst,scnd,small,large,count,max=0,i,num,j;
    while(scanf("%d%d",&frst,&scnd)==2)
    {
        if(frst>scnd)
        {
            small=scnd;
            large=frst;
        }
        else
        {
            small=frst;
            large=scnd;
        }
        for(i=small;i<=large;i++)
        {
            count=1;
            num=i;
            while(num!=1)
            {
                if(num%2==0)
                {
                    num=num/2;
                }
                else
                {
                    num=num*3+1;
                }
                count++;
              }
              if(count>max)
              {
                  max=count;
              }
        }
        printf("%d %d %d\n",frst,scnd,max);
    }
}
