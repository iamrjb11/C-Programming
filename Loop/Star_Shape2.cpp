///* Star Shape ====
/**
Input 3                   //Test Case.....
Output       *
            * *
           * * *

       Input 5
       Output      *
                  * *
                 * * *
                * * * *
               * * * * *

              Input 6
              Output   *
                      * *
                     * * *
                    * * * *
                   * * * * *
                  * * * * * *

                                **/

#include<stdio.h>
int main()
{
    int num_of_rows,row,colspaces,colstar,T;
    printf("Test Case : ");
    scanf("%d",&T);
    while(T--)
    {
        printf("Numbers of Rows : ");
        scanf("%d",&num_of_rows);
        for(row=1;row<=num_of_rows;row++)
        {
            for(colspaces=num_of_rows-row;colspaces>=1;colspaces--)
            {
                printf(" ");
            }
            for(colstar=1;colstar<=row;colstar++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}
