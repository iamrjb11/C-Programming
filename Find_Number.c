#include<stdio.h>
int main()
{
    int arra[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,20};
    int i,j,arra_sum=0,total_sum=0;
    for(i=0;i<20;i++)
    {
        total_sum+=(i+1);
        arra_sum+=arra[i];
    }
    printf("Missing Number : %d\n",total_sum-arra_sum);
}
