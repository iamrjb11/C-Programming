/** Lower triangular matrix
Input
        2   3   6
        8   9   12
        4   8   125
Output
        2   3   6
        0   9   12
        0   0   125
*/

#include<stdio.h>
int main()
{
    int mat[100][100];
    int n,m;
    printf("Enter ( n x m ): ");
    scanf("%d %d",&n,&m);
    int i,j,k;
    printf("Enter Elements : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The Main Matrix is :\n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    //main works
    printf("Setting zero in upper triangular matrix\n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i<=j)
            printf("%d\t",mat[i][j]);
            else printf("0\t");
        }
        printf("\n");
    }

}
