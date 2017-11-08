// input   12321
//output    Pell
//input   125621
//output  Not Pell

#include<stdio.h>
int main()
{
    int n,m,ara[100],ch=0;
    scanf("%d",&n);
    m=n;
    for(int i=0;;i++)
    {
        ara[i]=n%10;
        n=n/10;
        ch=ch*10+ara[i];
        //printf("i=%d ara=%d n=%d ch=%d\n",i,ara[i],n,ch);
        if(n==0) break;
    }
    if(ch==m) printf("\nPellindrome\n");
    else printf("Not Pellidrome\n");
}
