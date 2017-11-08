///*       Pascals Triangle

#include<stdio.h>
int main()
{
    int rows,i,j,k,number;
    printf("Number of Rows to be printed : ");
    while(scanf("%d",&rows)!=EOF)
    {
        printf("\n");
        for(i=1;i<=rows;i++)
        {
            for(k=i;k<rows;k++)
            {
                printf("   ");   //3 space
            }
            number=1;
            for(j=1;j<=i;j++)
            {
                printf("%d",number);
                number=number*(i-j)/j;
                if(number<10) printf("     ");           //5 space
                else if(number<100) printf("    ");     //4 space
                else printf("   ");                    //3 space
            }
            printf("\n");
        }
        printf("\nNumber of Rows to be printed : ");
    }
}
