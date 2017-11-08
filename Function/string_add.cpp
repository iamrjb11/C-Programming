/// String concatenation by Function


#include<stdio.h>
void strcon(char st[],char st2[])
{
    int i,j,k;
    for(i=0;;i++)
    {
        if(st[i]==NULL) break;
    }
    for(j=0;;j++)
    {
        if(st2[j]==NULL) break;
    }
    for(k=0;k<=j;k++)
    {
        st[i]=st2[k];
        i++;
    }
    puts(st);
}
int main()
{
    char st[100],st2[100];
    printf("1st String :");
    gets(st);
    printf("2nd String :");
    gets(st2);
    strcon(st,st2);
}
