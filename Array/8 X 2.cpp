///* Numta .............  8 X 2 = 16

#include<stdio.h>
int main()
{
    int numta[1000][100];
    int num_of_array,num_of_element;
    printf("Number of Arrays : Number of Elements : ");
    scanf("%d%d",&num_of_array,&num_of_element);
    for(int i=0;i<num_of_array;i++)
    {
        for(int j=0;j<num_of_element;j++)
        {
            numta[i][j]=(i+1)*(j+1);
        }
    }
    int search_numta;
    printf("Search Numta number : ");
    scanf("%d",&search_numta);
    for(int k=1;k<=num_of_element;k++)
    {
        printf("%d x %d=%1d\n",search_numta,k,numta[search_numta-1][k-1]);
    }
}
