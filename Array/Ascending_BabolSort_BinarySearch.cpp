#include<stdio.h>
int main()
{
    int a[1000],i,j,n,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    // binary search
    int s_num;
    while(scanf("%d",&s_num))
    {
        int mid,low=0,high=n-1;
        for(int k=0;;k++)
        {
            if(high<low)
            {
                printf("No Found\n");
                break;
            }
                                                      //printf("low=%d high=%d ",low,high);
            mid=(low+high)/2;
                                                     //printf("mid=%d a[mid]=%d\n",mid,a[mid]);
            if(a[mid]==s_num)
            {
                printf("Serach Number is %d Position in array size : %d\nPosition among the number is : %d\n",s_num,mid,mid+1);
                break;
            }
            else if(a[mid]<s_num)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
}
