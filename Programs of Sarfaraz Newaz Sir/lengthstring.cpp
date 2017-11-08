#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: \n");
    int i;
    gets(str);
    for(i=0;;i++)
    {
        if(str[i]=='\0')
            break;
    }
    printf("\nLength of string is %d\n",i);
}
