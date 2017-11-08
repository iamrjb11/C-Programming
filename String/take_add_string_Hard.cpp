/**
input    1st raji
         2nd b
output   Rajib
**/

#include<stdio.h>
int main()
{
    char st[100],st1[100];
    printf("Enter 1st String :");
    gets(st);
    printf("Enter 2nd String :");
    gets(st1);
    int i,j;
    for(i=0;;i++)
    {
        if(st[i]==NULL) break;
    }
    if(st[0]>='a'&&st[0]<='z') st[0]='A'+(st[0]-'a');
    for(i=i,j=0;;i++,j++)
    {
        st[i]=st1[j];
        if(st1[j]==NULL) break;
    }
    puts(st);
}
