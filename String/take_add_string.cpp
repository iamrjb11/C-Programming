/// Take two string and add them
/**
input 1st string Bangla
      2nd string desh
Output   Bangladesh
**/

#include<stdio.h>
int main()
{
    char str[100],str2[100];
    int i,j,k;
    printf("1st String :");
    gets(str);
    printf("2nd String :");
    gets(str2);
    for(i=0;;i++)
    {
        if(str[i]==NULL) break;
    }
    for(j=0;;j++)
    {
        if(str2[j]==NULL) break;
    }
    for(k=0;k<=j;k++)
    {
        str[i]=str2[k];
        i++;
    }
    puts(str);
}
