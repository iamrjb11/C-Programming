//Preblem

#include<stdio.h>
#include<string.h>
#define size 500
int main()
{
    char a[size],b[size],res[size];
    int i,k,r;
    for(i=0;i<size;i++)
    {
        a[i]='0';
        b[i]='0';
        res[i]=0;
    }
    printf("Enter Your Two Numbers : ");
    gets(a);
    gets(b);
    for(k=0;;k++)
    {
        if(a[k]==NULL) break;
    }
    for(r=0;;r++)
    {
        if(a[r]==NULL) break;
    }

    strrev(a);
    strrev(b);

    for(i=0;i<size;i++)
    {
        if(a[i]==NULL) a[i]=0;
        else a[i]=a[i]-48;
        if(b[i]==NULL) b[i]=0;
        else b[i]=b[i]-48;
    }
    for(k=0;;k++)
    {
        if(a[k]==NULL) break;
        printf("%d ",a[k]);
    }
    printf("\n");
    for(r=0;;r++)
    {
        if(a[r]==NULL) break;
        printf("%d ",a[r]);
    }
    printf("\n");

    for(i=0;i<4;i++)
    {
        int hand=0,j;
        for(j=i;j<4;j++)
        {
            res[j]=(((a[j]*b[i])+hand+res[j])%10)+48;
            hand=((a[j]*b[i]+hand+res[j])/10);
            printf("res[%d] = %d\n",j,res[j]);
        }

    }
    for(i=size-1;i>=0;i--)
    {
        if(res[i]!='0')
        {
            res[i+1]='\0';
            break;
        }
    }
    strrev(res);
    puts(res);
}
