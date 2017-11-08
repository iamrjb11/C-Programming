#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long int sum;
    char st[100];
    while(gets(st))
    {
        int i,j,len;
        len=strlen(st);
        sum=0;
        for(j=0,i=len;i>0;i--,j++)
        {
            sum=sum+(st[j]-'0')*(pow(2,i)-1);
        }
        if(sum!=0) printf("%ld\n",sum);
        else break;

    }
}
