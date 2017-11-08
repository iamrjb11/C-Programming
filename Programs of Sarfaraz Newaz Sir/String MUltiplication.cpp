#include<stdio.h>
#include<string.h>
#define size 500
int main()
{
    int i,j,k=0;
    char str1[size],str2[size],res[size];
    for(i=0; i<size; i++)
    {
        str1[i]= '0';
        str2[i]= '0';
    }
    gets(str1);
    gets(str2);
    strrev(str1);
    strrev(str2);
    for(i=0; i<size; i++)
    {
        if(str1[i]==NULL)
        {
            str1[i]=0;
        }
        else
        {
            str1[i] = str1[i] - 48;
        }
        if(str2[i]==NULL)
        {
            str2[i] = 0;
        }
        else
        {
            str2[i] = str2[i] - 48;
        }
    }
    for(i=0;i<size;i++)
    {
        res[i] = (str1[i] * str2[i] + k)%10 + 48;
        k = (str1[i] * str2[i] + k)/10;
    }
    for(i=size-1;i>=0;i--)
    {
        if(res[i]!= '0')
        {
            res[i+1] = NULL;
            break;
        }
    }
    strrev(res);
    puts(res);



}

