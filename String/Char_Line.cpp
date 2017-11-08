/**
input    Dialogue :   mY    nAmE is mD  RAjiB kHaN
                   3s    4s     1s 1s 2s
output             My
                   Name
                   Is
                   Md
                   Rajib
                   Khan
**/

#include<stdio.h>
int main()
{
    char st[100];
    printf("Enter A RockzzZ Dialogue :");
    gets(st);
    int i,j,k=0,ch;
    for(i=0;;i++)
    {
        if((st[i]>='a'&&st[i]<='z')||(st[i]>='A'&&st[i]<='Z')||(st[i]>='0'&&st[i]<='9')) ch=1;
        else
        {
            if(st[i+1]==' ') continue;
            else
            {
                if(st[k]==' ')
                {
                    k=i+1;
                    continue;
                }
                else if(st[k]>='a'&&st[k]<='z')
                {
                    st[k]='A'+(st[k]-'a');
                    printf("%c",st[k]);
                }
                else if(st[k]>='0'&&st[k]<='9')
                {
                    printf("%d",st[k]);
                }
                else printf("%c",st[k]);
                for(j=k+1;j<i;j++)
                {

                    if(st[j]>='0'&&st[j]<='9')
                    {
                        printf("%d",st[j]);
                    }
                    else if(st[j]>='A'&&st[j]<='Z')
                    {
                        st[j]='a'+(st[j]-'A');
                        printf("%c",st[j]);
                    }
                    else printf("%c",st[j]);
                }
                printf("\n");
                k=i+1;
            }
        }
        if(st[i]==NULL) break;
    }
}
