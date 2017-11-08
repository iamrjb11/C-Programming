#include<stdio.h>
int main()
{
    char st1[50],st2[50];
    gets(st1);
    gets(st2);
    int i,ch;
    for(i=0;;i++)
    {
        if(st1[i]==st2[i]) ch=1;
        else
        {
            ch=0;
            break;
        }
        if(st1[i]==NULL) break;                          // NULL ( \0 ) charecter hosse string er ending condition
    }
    if(ch==1) printf("Password Done\n");
    else printf("Wrong Password\n");
}
