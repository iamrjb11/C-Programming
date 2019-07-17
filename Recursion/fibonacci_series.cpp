/**
@author : RK Rajib Khan
**/
/* Fibanacci Series
input : Range : 10
output : 0 1 1 2 3 5 8 13 21 34
logic :
pre=next; next=pre+next; always print pre value;
*/
#include<stdio.h>
#include<string.h>
void fibonacci_series(int pre,int next,int range){
    if(range!=0){
        printf("%d ", pre);
        fibonacci_series(next,pre+next,range-1); 
    }
}

int main()
{
    int range;
    printf("Range : ");
    while(scanf("%d",&range)!=EOF){
        fibonacci_series(0,1,range);

        printf("\nRange : ");

    }
    
    return 0;
}
