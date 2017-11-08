#include<stdio.h>
int main()
{
    int a[1000][100],ara,elem;
    scanf("%d%d",&ara,&elem);
    for(int i=0;i<ara;i++)
    {
        for(int j=0;j<elem;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<ara;i++)
    {
        for(int j=0;j<elem;j++)
        {
            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
        printf("\n\n");
    }
}
