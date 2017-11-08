///  String Reverse by Function


#include<stdio.h>
void strreverse(char str[])
{
    int i,j,last_pos;
    for(i=0;;i++)
    {
        if(str[i]==NULL) break;
    }
    last_pos=i-1;
    for(j=0;j<i/2;j++,last_pos--)
    {
        char temp=str[j];
             str[j]=str[last_pos];
             str[last_pos]=temp;
    }
    puts(str);
}
int main()
{
    char str[100];
    gets(str);
    strreverse(str);

}
