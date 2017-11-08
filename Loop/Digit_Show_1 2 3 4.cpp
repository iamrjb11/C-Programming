/**
Input    1234
Output   1 2 3 4
Input    123456
Output   1 2 3 4 5 6
**/

#include<stdio.h>
int main()
{
    int n,m,r,save;
    scanf("%d",&n);
    m=n;
    int i,j,k;
    for(i=1;;i++)
    {
        n=n/10;
        if(n==0) break;
    }
    for(j=1;j<=i;j++)
    {
        r=m;
       for(k=j+1;k<=i;k++)
       {
           m=m/10;
       }
       save=m%10;
       printf("%d ",save);
       m=r;
    }



}
