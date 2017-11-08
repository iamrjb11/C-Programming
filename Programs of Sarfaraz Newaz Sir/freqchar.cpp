#include<stdio.h>
#include<string.h>
int main()
{
    char st[100],a[256];
    int i,l;
    gets(st);
    for(i=0; i<256; i++)
        a[i]=0;
    l = strlen(st);
    for(i=0; i<l; i++)
    {
        if(st[i]>='a' && st[i]<='z')
        {
            a[st[i]]++;
        }

    }
    for(i=0; i<256; i++)
    {
        if(a[i]>0)
            printf("\n%c=%2d",i,a[i]);
    }

}

