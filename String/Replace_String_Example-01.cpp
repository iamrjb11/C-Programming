/**
Input    Rajib Khan    RajibKhan i Love You
Replace Rajibkhan uKnow

Output   Rajib Khan    uKnow     i Love You
*/

#include<stdio.h>
int main()
{
    char a[100],out[100],in[100];
    printf("Enter a string: ");
    gets(a);
    int i,j=0,k,t,r,c=-1;
    printf("Replace : ");
    scanf("%s %s",out,in);
    for(k=0;;k++)
    {
        if(in[k]==NULL) break;
    }
    k=k-1;
    for(t=0;;t++)
    {
        if(out[t]==NULL) break;
    }
    t=t-1;
    int ch=0;
    //printf("t=%d ,k=%d\n",t,k);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==out[j])
        {
            j++;
            c++;
            if(t==c)
            {
                if(k>t)
                {
                    int temp=k;
                    k=t;
                    t=temp;
                }
                int l,s;
                j=0;
                s=t-k;
                r=t-s;
                for(l=i-c;l<=i;l++,j++)
                {
                    if(ch<=r)
                    {
                        a[l]=in[j];
                        ch++;
                    }
                    else
                    {
                        a[l]=' ';
                    }
                }
            }
        }
        else
        {
            j=0;
            c=-1;
        }
    }
    puts(a);
}

