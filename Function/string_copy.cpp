///String Copy

#include<stdio.h>
void strcpy(char b[],char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
}
int main()
{
    char a[100],b[100];
    while(scanf("%s",a)!=EOF)
    {
        strcpy(b,a);
        puts(b);
        printf("\n");
    }
}
