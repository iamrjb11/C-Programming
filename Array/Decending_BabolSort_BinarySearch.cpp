///
/**
Input         5    //koyti number nibe
              5 3 0 1 2   // number gulo ( decending sort korte hobe )
Output        5 3 2 1 0

2nd Input           3       // For Binary Search
2nd Output   Yes ,Position 2
**/

#include<stdio.h>
int main()
{
    int a[100],n;
    printf("Array Size : ");
    scanf("%d",&n);
    for(int k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
         printf("%d ",a[i]);
    }
    printf("\n");
    int num;
    printf("Search Number : ");
    scanf("%d",&num);
    int low=0,high=n-1,mid;
    for(int i=0;;i++)
    {
   //     printf("High=%d,Low=%d,",high,low);
        if(low>high)
        {
            printf("Not Found\n");
            break;
        }
        mid=(low+high)/2;
        if(a[mid]==num)
        {
            printf("Yes , Number Position : %d\n",mid+1);
            break;
        }
        else if(a[mid]<num)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
}
