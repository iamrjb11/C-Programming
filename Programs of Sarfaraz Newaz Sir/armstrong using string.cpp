#include<stdio.h>
int main()
{
    char st[100],arm[100];
    gets(st);
    int i,j,l,sum=0,flag,pow=1,temp;
    for(l=0;st[l]!='\0';l++){}
    for(i=0;i<l;i++)
    {
        temp = st[i] - '0';
        for(j=1;j<=l;j++)
        {
            pow*=temp;
        }
        sum+=pow;
        pow =1;
    }
    for(i=l-1;i>=0;i--)
    {
        temp = sum%10;
        arm[i] = temp + '0';
        sum/=10;
    }
    flag = 1;
    for(i=0;i<l;i++)
    {
        if(arm[i]!=st[i])
        {
            flag =0;
            break;
        }
    }
    if(flag==1)
        printf("Armstrong\n");
    else
        printf("Not armstrong\n");



}
