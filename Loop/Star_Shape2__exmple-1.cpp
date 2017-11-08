/**
Input      5

Output         1
              123
             12345
            1234567
           123456789
**/


#include<stdio.h>
int main()
{
    int row,rownm,spa,pri,n;
    while(scanf("%d",&rownm))
    {
        n=1;
        for(row=1;row<=rownm;row++)
        {
            for(spa=row;spa<rownm;spa++)
            {
                printf(" ");
            }
            for(pri=1;pri<=n;pri++)
            {
                printf("%d",pri);
            }
            printf("\n");
            n+=2;
        }
    }
}
