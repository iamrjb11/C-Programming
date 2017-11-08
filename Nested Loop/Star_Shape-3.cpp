///* Star Shape ===
/**
Input   5
Output     * * * * *           // Test Case.....
            * * * * *
             * * * * *
              * * * * *
               * * * * *
**/

#include<stdio.h>
int main()
{
    int row,colspaces,colstar,num_of_rows,T;
    printf("Test Case : ");
    scanf("%d",&T);
    while(T--)
    {
        printf("Number Of Rows : ");
        scanf("%d",&num_of_rows);
        for(row=1;row<=num_of_rows;row++)
        {
            for(colspaces=row;colspaces>1;colspaces--)
            {
                printf(" ");
            }
            for(colstar=1;colstar<=num_of_rows;colstar++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}
