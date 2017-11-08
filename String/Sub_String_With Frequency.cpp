/** Sub- String with Frequency
input   rajibkhan kmanh hk tagskh  // kh
output   sub-string
         Frequency 3
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
    int ch=0,freq=0;
    for(i=0,j=0;str[i]!='\0';i++)
    {
        if(str[i]==str2[j])
        {
            c++;
            j++;
            if(l==c)
            {
                ch=1;
                freq++;
                c=0,j=0;
            }
        }
    }
    if(ch==1) printf("Sub-String\nFrequency : %d\n",freq);
    else printf("Not Sub\n");
}
