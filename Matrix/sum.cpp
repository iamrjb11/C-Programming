/**         Matrix sum
Input
        1  2  3     2  1  3
        4  5  6     5  4  6
        7  8  9     8  7  9
Output
        3   3   6
        9   9   12      //   Sum
        15  15  18




**/

#include<stdio.h>
int main()
{
    int mat[100][100],mat2[100][100];
    int i,j,row,col;
    printf("First Matrix's Rows : Columns : ");
    scanf("%d%d",&row,&col);
    printf("Second Matrix's Rows : Columns : ");
    int row2,col2;
    scanf("%d%d",&row2,&col2);
    printf("First Matrix:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nThe Entered Matrix's are:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    int add[100][100];
    printf("\nThe Sum of the Matrix is:\n");
    if(row==row2&&col==col2)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                add[i][j]=mat[i][j]+mat2[i][j];
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%d\t",add[i][j]);
            }
            printf("\n");
        }
    }
    else printf("Dimension Error!\n");
}

