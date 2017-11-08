//* Summation of Series *//
/**
Input - Start Point:1
        Difference Point:1
        End Point:10

Output - Seris: 1 2 3 4 5 6 7 8 9 10
         The Sum Is:55
                                   **/
#include<stdio.h>
int main()
{
    int T,i,sum,start,end,diff;
    scanf("%d",&T);
    while(T--)
    {
        printf("Start:Diff:End :");
        scanf("%d%d%d",&start,&diff,&end);
        printf("Seris : ");
        sum=0;
        for(i=start;i<=end;i=i+diff)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("\nTotal Sum is : %d\n",sum);
    }
}
