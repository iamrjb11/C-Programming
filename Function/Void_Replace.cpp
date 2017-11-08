/**
Input    ABCDEF ABCDAID RAJIB  //String
Input    A   Z           // For Replace
Outut    ZBCDEF ZBCDZID RZJIB
**/
#include<stdio.h>
void replace(char st[],char old,char o_new)
{
    for(int i=0;st[i]!='\0';i++)
    {
        if(st[i]==old) st[i]=o_new;
    }
    puts(st);
}
int main()
{
    char st[100];
    printf("Enter a string : ");
    gets(st);
    char old,o_new;
    printf("Old : New :");
    scanf("%c %c",&old,&o_new);//for Take Input like as (A Z) majkhane akta deyar jonno scanf a duto input er moja akta space dici
    replace(st,old,o_new);


}
