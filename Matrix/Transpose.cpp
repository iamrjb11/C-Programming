/**      Transpose Matrix
Input
        1  2  3
        4  5  6
        7  8  9
Output
        1  4  7
        2  5  8
        3  6  9
**/

#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,row,col;
    printf("Rows : Columns : ");
    scanf("%d%d",&row,&col);
    printf("Matrix's Elements : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe Entered Matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
            if(a[i][j]<=9) printf("   ");
            else printf("  ");
        }
        printf("\n");
    }
    if(row==col)
    {
        printf("\nThe Transpose of the Matrix is:\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%d",a[j][i]);
                if(a[j][i]<=9) printf("   ");
                else printf("  ");
            }
            printf("\n");
        }
    }
    else printf("Dimension Error!\n");
}
