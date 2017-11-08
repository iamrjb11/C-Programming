#include<stdio.h>
long long int ans=1,i=0;
long long int fac(int number,int check)
{
    if(check==1)
    {
        ans=1;
        check=0;
    }
    if(number==0)
    return ans;
    ans=ans*number;
    if(number==1)
    {
        return ans;
    }
    //i++;
    //printf("%d Ans :%d\n",i,ans);

    fac(number-1,check);
}
int main()
{
    int number,check=0;
    printf("Please Enter a Number : ");
    while(scanf("%d",&number)==1)
    {
        printf("%d ! = %lld\nPlease Enter a Number : ",number,fac(number,check));
        check=1;
    }
}
