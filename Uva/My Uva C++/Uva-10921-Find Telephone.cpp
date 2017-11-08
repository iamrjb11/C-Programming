#include<stdio.h>
#include<string.h>
char let(char c[],int i);
int main()
{
    char c[30];
    while(gets(c)!=NULL)
    {
        int l,i;
        l=strlen(c);
        if(l>30) break;
        for(i=0;i<l;i++)
        {
            if(c[i]>='A'&&c[i]<='Z') c[i]=let(c,i);
        }
        puts(c);
    }
}
char let(char c[],int i)
{
    char ch;
    if(c[i]>='A'&&c[i]<='C') ch='2';
    else if(c[i]>='D'&&c[i]<='F') ch='3';
    else if(c[i]>='G'&&c[i]<='I') ch='4';
    else if(c[i]>='J'&&c[i]<='L') ch='5';
    else if(c[i]>='M'&&c[i]<='O') ch='6';
    else if(c[i]>='P'&&c[i]<='S') ch='7';
    else if(c[i]>='T'&&c[i]<='V') ch='8';
    else if(c[i]>='W'&&c[i]<='Z') ch='9';
    return ch;
}
