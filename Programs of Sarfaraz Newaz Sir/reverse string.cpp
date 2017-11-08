#include<stdio.h>
int main()
{
    char str[100];
    char temp;
    gets(str);
    int i,j;
    for(i=0; ;i++)
    {
        if(str[i]=='\0')
        {
            break;
        }
    }
    i=i-1;
    for(j=0;j<i;j++)
    {
        temp=str[j];
        str[j] = str[i];
        str[i]=temp;
        i--;
    }
    puts(str);
}
