/**
@author : RK Rajib Khan cool
**/
/* Power
input : 2 3
output : 8
input : 3 3
output : 27
logic :
*/
#include<stdio.h>
#include<string.h>
float power(int r,int n){     // r^n
    if(n!=0){
        if(n>0)
            return r=r*power(r,n-1);
        else if(n<0){
            n=-1*n;
            r=r*power(r,n-1);
            return (float)1/r;
        }
    }
    else return 1;
}
int main()
{
    int r,n;
    printf("Power r and n : ");
    while(scanf("%d %d",&r,&n)!=EOF){
        printf("Ans : %0.3f",power(r,n));

        printf("\nPower r and n : ");

    }

    return 0;
}
