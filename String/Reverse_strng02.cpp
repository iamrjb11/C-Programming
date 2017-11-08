/// Reverse String-02

#include<stdio.h>
int main()
{
    int i,j,last_pos;
    char str[100];
    gets(str);
    for(i=0;;i++)
    {
        if(str[i]==NULL) break;
    }
    last_pos=i-1;
    for(j=0;j<i/2;j++)
    {
        char temp=str[j];
             str[j]=str[last_pos];
             str[last_pos]=temp;
             last_pos--;
    }
    puts(str);
}
