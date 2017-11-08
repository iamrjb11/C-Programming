/** Sub- String
input   rajib  // jib
output   sub-string
**/
#include<stdio.h>
int main()
{
    char str[100],str2[100];
    printf("Enter a String :\n");
    gets(str);
    printf("Enter Sub-String:\n");
    gets(str2);
    int i,j,l,c=0;
    for(l=0;str2[l]!='\0';l++)
    {

    }
    int ch=0;
    for(i=0,j=0;str[i]!='\0';i++)
    {
        if(str[i]==str2[j])
        {
            c++;
            j++;
            if(l==c)
            {
                ch=1;
                break;
            }
        }
    }
    if(ch==1) printf("Sub\n");
    else printf("Not Sub\n");
}
