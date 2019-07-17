/**
@author : RK Rajib Khan
Problem : Prime Factors
Input : Enter a number : 315 ->3 3 5 7
Output : 3 3 5 7
**/
#include<stdio.h>

int next_primeN(int i){
    int j,ch;
    for(i=i+1;;i++){
        ch=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                ch=0;
                break;
            }
        }
        if(ch==1) break;
    }

    return i;
}
int main(){
    int i,j,n;
    printf("Enter Number : ");
    scanf("%d",&n);
    j=1;
    for(i=1;;i++){
        j=next_primeN(j);

        if(n%j==0){
            n=n/j;  ///  last 7/7=1
            printf("%d  ",j);
            j=1; /// again initialize prime value to 1.
        }
        if(n==1) break;


    }


}
