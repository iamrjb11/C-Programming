/// Multiplication

#include<stdio.h>
int main()
{
    int mat[100][100],mat2[100][100];
    int n,m;
    printf("Enter The First Matrix's Rows : Columns ( n x m ) : ");
    scanf("%d%d",&n,&m);
    int i,j,k;
    printf("Elements : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int n1,m1;
    printf("Enter The Second Matrix's Rows : Columns ( n x m ) : ");
    scanf("%d%d",&n1,&m1);
    printf("Elements : ");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("First Matrix A is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",mat[i][j]);
            if(mat[i][j]<=9) printf("   ");
            else if(mat[i][j]<=99) printf("  ");
            else printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    printf("Second Matrix B is :\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            printf("%d",mat2[i][j]);
            if(mat2[i][j]<=9) printf("   ");
            else if(mat2[i][j]<=99) printf("  ");
            else printf(" ");
        }
        printf("\n");
    }
    ///For Multiplication
    int mul[100][100];
    if(m==n1)
    {
        printf("The Multiplication Of A and B is :\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                int sum=0;
                for(k=0;k<m;k++)
                {
                    sum=sum+mat[i][k]*mat2[k][j];
                }
                mul[i][j]=sum;
                printf("%d",mul[i][j]);
                if(mul[i][j]<=9) printf("   ");
                else if(mul[i][j]<=99) printf("  ");
                else printf(" ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nSorry , Dimension Error !\n");
    }
}
