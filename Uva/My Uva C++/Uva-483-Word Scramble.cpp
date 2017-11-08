#include<stdio.h>
int main()
{
    char st[1000000];
    int i,j,k,r,s;
    while(gets(st)!=NULL)
    {
        s=0;
        for(i=0;st[i]!='\0';i++)
        {
            if(st[i+1]==' '||st[i+1]=='\0')
            {
                int rem=i-s;

                for(k=s,r=i,j=0;j<=(rem/2);j++,k++,r--)
                {
                    char temp=st[k];
                    st[k]=st[r];
                    st[r]=temp;
                }
                s=i+2;
            }
        }
        puts(st);
    }
}
