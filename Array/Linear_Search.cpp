///* Search a Number From An Array Using Linear Search

/**
Input    6
    1 5 8 9 3 2
         5

Input     4
       5 6 12 8
         10

Output
      Case 1: Yes , Position 2
      Case 2: Not Found
      */

#include<stdio.h>
int main()
{
    int ara_size,n,i,cas=1,a[1000];
    printf("Array Size : ");
    while(scanf("%d",&ara_size))
    {
        for(i=0;i<ara_size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter The Search Number : ");
        scanf("%d",&n);
        for(i=0;i<ara_size;i++)
        {
            if(a[i]==n)
            {
                printf("Case %d : Yes , Position %d\n",cas,i+1);
                break;
            }
        }
        if(i==ara_size) printf("Case %d : Not Found\n",cas);
        cas++;
        printf("Array Size : ");
    }
}
