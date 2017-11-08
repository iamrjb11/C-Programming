///SWAP TWO VARIABLES WITHOUT USING THIRD USING C PROGRAM VARIABLE
///Swapping in c without temporary variable
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d\n",a,b);
}
