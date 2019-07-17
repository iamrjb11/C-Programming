/**
@author : RK Rajib Khan
Problem : Divide the number based on point ( . )
Input : Enter a floating number : 123.75
Output : 123 and 75
**/
#include<stdio.h>
#include<math.h>
double * action(double num){
    double sum=0,rem,result,remainder,save_num,ar[2];
    save_num=num;

    while((int)num!=0){
        int temp = (int)num/10;
        num=num/10;
        rem =(10*(num-temp));
        sum=sum*10+(int)rem;
        //printf("temp %d num : %lf rem : %d \n",temp,num,(int)rem);
    }
    result=sum;
    //printf("R\n");
    sum=0,rem=10;
    num=save_num;
    while((int)rem!=0){
        double temp = num*10;
        num = num*10;
        int digit = (int)num%10;
        sum = sum*10+digit;
        rem =(10*(num-(int)temp));
        ///printf("temp %d num %lf rem %d\n",(int)temp,num,(int)rem);

    }
    remainder = sum;
    //printf("%lf   %lf\n",result,remainder);
    ar[0]=result;
    ar[1]=remainder;
    return ar;
}
int main(){

    double num,ans,sum,res,rem;
    double * pointer;
    printf("Enter a float number : ");
    scanf("%lf",&num);

    pointer = action(num);
    rem=*(pointer+1);
    pointer = action(*(pointer+0));
    res = *(pointer+0);
    printf("\nOutput : %d and %d\n",(int)res,(int)rem);
}
