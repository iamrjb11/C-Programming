/** Find nCr & nPr
Diff   nCr=n!/(r!(n-r)!)  &  nPr=n!/(n-r)!
**/

#include<stdio.h>
int fac(int num);
int nCr(int n,int r);
int nPr(int n,int r);
int main()
{
    int number;
    printf("Enter a Number for its Factorial : ")
    scanf("%d",&number);
    printf("%d!=%d\n",number,fac(number));
    int n,r;
    printf("Enter n : r : ");
    scanf("%d %d",&n,&r);
    printf("nCr : %d\n",nCr(n,r));
    printf("nPr : %d\n",nPr(n,r));
}
int fac(int num)
{
    int f=1;
    for(int i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
int nCr(int n,int r)
{
    return fac(n)/(fac(r)*fac(n-r));
}
int nPr(int n,int r)
{
    return fac(n)/fac(n-r);
}
