#include<stdio.h>

int main()

{
    char a[100],b[100];
    gets(a);
    gets(b);
    bool found;
    int i,j;
    for(i=0;a[i]!='\0';i++){}
    for(j=0;b[j]!='\0';j++){}
    for(int k=0;k<i;k++)
    {
        if(a[k]==b[0])
        {
            found=true;
            for(int l=1;l<j;l++)
            {
                if(a[k+l]!=b[l])
                {
                    found=false;
                    break;
                }
            }
        }
        if(found)
        {
            break;
        }

    }
    if(found==true)
    {
        printf("FOUND!!!!");
    }
    else
    {
        printf("Not Found!");
    }
}
