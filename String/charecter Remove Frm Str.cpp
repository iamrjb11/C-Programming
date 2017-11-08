/**
input Rajibkhan  /// a
Output Rjibkhn
input  rajibkhanaa  /// a
output rjibkhn
**/

#include<stdio.h>
int main()
{
    char str[100],ch;
    printf("Charecter :\n");
    gets(str);
    printf("Charecter Word :\n");
    scanf("%c",&ch);
    int i,j;
    for(i=0,j=0;str[i]!='\0';i++)
    {
        if(str[i]==ch) continue;
        str[j]=str[i];
        j++;
    }
    str[j]='\0';
    puts(str);
}
