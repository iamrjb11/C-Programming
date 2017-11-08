/**
Matrix Size n x m = 2  3

                    2 3 5
                    8 9 12
Output :
The sum of column 1 : 10
The largest column 1 : 8

The sum of column 2 : 12
The largest column 1 : 9

The sum of column 1 : 17
The largest column 1 : 12
**/

#include<Stdio.h>
int main()
{
    int mat[100][100];
    int i,j,m,n;
    printf("Enter the size of the matrix ( n x m ) : ");
    scanf("%d %d",&m,&n);
    printf("Enter the Elements :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Enter matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    int lar[100],sum[100];
    for(i=0;i<n;i++)
    {
        lar[i]=mat[0][i];
        sum[i]=mat[0][i];
    }
    for(i=0;i<n;i++)
    {

        for(j=1;j<m;j++)
        {
            if(lar[i]<mat[j][i]) lar[i]=mat[j][i];
            sum[i]=sum[i]+mat[j][i];
        }
        printf("The  sum of column %d : %d\nThe largest column %d : %d\n\n",i+1,sum[i],i+1,lar[i]);
    }
}
