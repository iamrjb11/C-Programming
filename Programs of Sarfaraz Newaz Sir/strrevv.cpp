#include<stdio.h>
int main()
{
    int r,c,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("\n");
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=n+1-r;c++)
        {
            printf(" ");
        }
        for(c=1;c<=2*r-1;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

