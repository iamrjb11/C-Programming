#include<stdio.h>
int main()
{
    char st1[50],st2[50];
    gets(st1);
    gets(st2);
    int i,ch=1;
    for(i=0;;i++)
    {
        if(st1[i]!=st2[i])
        {
            ch=0;
            break;
        }
        if(st1[i]==NULL && st2[i]==NULL) break;
        if(st1[i]==NULL || st2[i]==NULL)
        {
            ch=0;
            break;
        }
    }
    if(ch==1) printf("Match\n");
    else printf("Not Match\n");
}
