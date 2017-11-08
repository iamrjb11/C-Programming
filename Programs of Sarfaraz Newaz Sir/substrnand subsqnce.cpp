#include<stdio.h>
int main()
{
    char st1[100],st2[100];
    gets(st1);
    gets(st2);
    bool found=false;
    int i,j;
    for(i=0,j=0; st1[i]!='\0' && st2[j]!='\0'; i++)
    {
        if(st2[j]==st1[i])
            j++;
    }
    if(st2[j]=='\0')
        printf("Found\n");
    else
        printf("Not Found\n");
        for(i=0;st1[i]!=NULL && !found;i++)
        {
            if(st1[i]==st2[0])
            {
                found=true;
                for(j=1;st2[j]!=NULL;j++)
                    if(st1[++i]!=st2[j])
                {
                    found=false;
                    break;
                }
            }
        }
        if(found) printf("kkk");
        else printf("jjjj");
}
