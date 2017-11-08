#include<stdio.h>
int main()
{
    char str[100],str2[100];
    printf("Enter Real Password :\n");
    gets(str);
    printf("Enter Your Password :\n");
    gets(str2);
    int i,j;
    for(i=0;str[i]!='\0';i++)
    {

    }
    for(j=0;str2[j]!='\0';j++)
    {

    }
    int ch=1;
    if(i==j)
    {
        for(i=0,j=0;str[i]!='\0';i++,j++)
        {
            if(str[i]!=str2[j])
            {
                ch=0;
                break;
            }
        }
    }
    else ch=0;
    if(ch==1) printf("Password Match\n");
    else printf("Sorroy , your Password is not Match\n");
}
