#include <stdio.h>

int main()
{
    char str[100], rev_str[100];
    int i,l=0, flag = 0;
    printf("Enter a string \n");
    gets(str);
    for (i=0;str[i]!='\0';i++)
    {
        l++;
    }
    for (i=l-1;i>=0;i--)
    {
       rev_str[l-i-1] = str[i];
    }

    for (i=0;i<l;i++)
    {
        if (rev_str[i] == str[i])
            flag = 1;
        else
            flag = 0;
    }
    if (flag == 1)
        printf("%s is a palindrome \n", str);
    else
        printf("%s is not a palindrome \n", str);
}

