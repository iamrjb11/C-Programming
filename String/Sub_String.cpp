///*        Substring

#include<stdio.h>
int main()
{
    char str[100],str2[100];
    int i,j,k,l=0,ch=2;
    printf("Enter : ");
    gets(str);
    for(i=0;;i++)
    {
        if(str[i]==NULL) break;
    }
    printf("Sub : ");
    gets(str2);
    for(j=0;;j++)
    {
        if(str2[j]==NULL) break;
    }
    //printf("\nj=%d\n",j);
    for(k=0;k<j;k++)
    {
        for(l=l;l<i;l++)
        {
            //printf("k=%d, l=%d ,st2=%c ,st=%c,ch=%d\n",k,l,st2[k],st[l],ch);
            if(str2[k]==str[l])
            {
                l=l;
                ch=1;
                break;
            }
            else if(l==i-1) ch=0;
        }
        if(ch==0) break;
    }
    if(ch==1) printf("Subsquence\n");
    else printf("Not Subsquence\n");
    int r=0;
    ch=2;
    for(k=0;k<j;k++)
    {
        for(l=r;l<i;l++)
        {
            if(str2[k]==str[l])
            {
                r=l+1;
                ch=1;
                break;
            }
            else if(ch==1)
            {
                ch=0;
                break;
            }
        }
        if(ch==0) break;
    }
    if(ch==1) printf("Substring\n");
    else printf("Not Substring\n");

}
