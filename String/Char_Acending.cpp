/**
input rajib
output a b i j r
**/

#include<stdio.h>
int main()
{
    char st[100],temp;
    printf("Enter : ");
    gets(st);
    int i,j;
    for(i=0;;i++)
    {
        if(st[i]==NULL) break;
        for(j=i+1;;j++)
        {
            if(st[j]==NULL) break;
            if(st[i]>st[j])
            {
                temp=st[i];
                st[i]=st[j];
                st[j]=temp;
            }
        }
        printf("%c ",st[i]);
        //printf("%s\n",st);
    }
    //printf("%s\n",st);

}
