#include <stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i;
    for(i=0;;i++)
    {
        if(str[i]==NULL) break;
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=('a'+(str[i]-'A'));
        }
        //printf("%d ",str[i]);
    }
    printf("\n%s\n",str);
}
