/**
Input      5

Output         1
              12
             123
            1234
           12345
**/


#include<stdio.h>
int main()
{
    int row,rownm,spa,pri;
    while(scanf("%d",&rownm))
    {
        for(row=1;row<=rownm;row++)
        {
            for(spa=row;spa<rownm;spa++)
            {
                printf(" ");
            }
            for(pri=1;pri<=row;pri++)
            {
                printf("%d",pri);
            }
            printf("\n");
        }
    }
}
