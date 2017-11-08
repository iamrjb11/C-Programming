#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);

    while(t--)
    {
        if(t>=14) break;
        scanf("%d %d",&a,&b);
        if(a>=1000000001||b>=1000000001) break;
        if(a<b) printf("<\n");
        else if(a>b) printf(">\n");
        else printf("=\n");
    }
}
