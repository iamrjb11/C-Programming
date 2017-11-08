/**         Transpose Matrix-02
Input
        1  2  3
        4  5  6
        7  8  9
Output
        2  1  3
        5  4  6
        8  7  9

**/

#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,temp,row,col;
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
    for(i=0;i<row;i++)
    {
        for(j=0;;)
        {
            temp=a[i][j];
            a[i][j]=a[i][j+1];
            a[i][j+1]=temp;
            break;
        }
    }
    printf("\nThe Transpose of the Matrix is:\n");
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

}
