/// String Pellindrome

#include<stdio.h>
int main()
{
    char str[100],str2[100];
    int i,j,last_Pos;
    printf("Enter a String : ");
    gets(str);
    for(i=0;;i++)
    {
        if(str[i]==NULL) break;
        str2[i]=str[i];
    }
    last_Pos=i-1;
    for(j=0;j<=i/2;j++)
    {
        char temp=str[j];
        str[j]=str[last_Pos];
        str[last_Pos]=temp;
        last_Pos--;
    }
    printf("Reverse String : ");
    puts(str);
    int ch;
    for(j=0;j<i;j++)
    {
        if(str[j]==str2[j]) ch=1;
        else
        {
            ch=0;
            break;
        }
    }
    if(ch==1) printf("Pellindrome\n");
    else printf("Not Pellindrome\n");
}
