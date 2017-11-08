#include <stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i;
    for(i=0;;i++)
    {
        if(str[i]==NULL) break;
        if(str[i]>=97&&str[i]<=122)
        {
            str[i]=('A'+(str[i]-'a'));
        }
        //printf("%d ",str[i]);
    }
    printf("\n%s\n",str);
}
