/// Reverse String-01
//Input   abcde
//Output  edcba

#include<stdio.h>
int main()
{
    int i,j;
    char str[100];
    gets(str);
    for(i=0;;i++)
    {
        if(str[i]==NULL) break;
    }
    i=i-1;
    for(j=0;j<=i/2;j++)
    {
        char temp=str[j];
             str[j]=str[i];
             str[i]=temp;
             i--;
    }
    puts(str);
}
