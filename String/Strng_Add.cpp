/**
Input   25 3
Output   28
input   996650 887
Output   100552
**/

#include<stdio.h>
#include<string.h>
#define size 500
int main()
{
    char a[size],b[size],res[size];
    int i;
    for(i=0;i<size;i++)
    {
        a[i]='0';
        b[i]='0';
    }
    printf("Enter Your Two Numbers : ");
    gets(a);
    gets(b);
    strrev(a);
    strrev(b);
    for(i=0;i<size;i++)
    {
        if(a[i]==NULL) a[i]=0;
        else a[i]=a[i]-48;
        if(b[i]==NULL) b[i]=0;
        else b[i]=b[i]-48;
    }
    int hand=0;
    for(i=0;i<size;i++)
    {
        res[i]=((a[i]+b[i]+hand)%10)+48;
        hand=((a[i]+b[i]+hand)/10);
    }
    for(i=size-1;i>=0;i--)
    {
        if(res[i]!='0')
        {
            res[i+1]='\0';
            break;
        }
    }
    strrev(res);
    puts(res);
}
