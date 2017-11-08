///* Find The Odd Element
/**
input    2 7 1 2 9 7 7

output   2      7      1      9

     ara[0] ara[1] ara[2] ara[4]

input   2 2 9 8 8 9 5 2 9 10 5 11

output      2      9      8      5     10      11

        ara[0] ata[2] ara[3] ara[6] ara[9] ara[11]
        **/
#include<stdio.h>
int main()
{
    int a[100];
    int i,j,n;
    printf("Number Size : ");
    scanf("%d",&n);
    printf("Input Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Odd elements : ");
    for(i=0;i<n;i++)
    {
        int ch=1;
        for(j=i-1;j>=0;j--)
        {
            if(a[i]==a[j])
            {
                ch=0;
                break;
            }
        }
        if(ch==1) printf("%d ",a[i]);
    }
}
