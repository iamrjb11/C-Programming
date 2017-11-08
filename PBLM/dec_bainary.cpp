/// Decimal to Binary


#include<stdio.h>
int main()

{
    int m,bainary=0,a=1;
    int n,rem;
    printf("Decimal:");
    scanf("%d",&n);
    m=n;
    while(n!=0){
        rem=n%2;
        bainary=bainary+rem*a;
        n=n/2;
        a=a*10;
        printf("%d\n",rem);
        }
        printf("\ndec:%d to bainary:%d\n",m,bainary);
}

