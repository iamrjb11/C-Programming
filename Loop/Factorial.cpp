/**
Input  6
       9
       4
Output 6! is =720
       9! is =362880
       4! is =24
*/

#include<stdio.h>
int main()
{
    int f,i,n;
    while(scanf("%d",&n))
    {
        f=1;
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        printf("%d! is : %d\n",n,f);
    }
}
