#include<stdio.h>
int main()
{
    char st[100],st2[100];
    gets(st);
    gets(st2);
    int i,j;
    for(i=0,j=0;st[i]!='\0' && st2[j]!='\0';i++)
    {
        if(st2[j]==st[i])
        j++;
    }
    if(st2[j]=='\0')
        printf("Found\n");
    else
        printf("Not Found\n");
        return 0;
}
