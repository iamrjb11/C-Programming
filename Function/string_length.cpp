///  String length by Function


#include<stdio.h>
int strlength(char st[])
{
    int i;
    for(i=0;st[i]!='\0';i++)
    {

    }
    return i;
}
int main()
{
    char st[100];
    gets(st);
    printf("String Length is : %d\n",strlength(st));
}
