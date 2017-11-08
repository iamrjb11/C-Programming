/**
input        5           // Array Size
      23 76 -96 76 88
output  max=88
        min=-96
**/
#include<stdio.h>
int main()
{
    int ara_size,max,min,a[100];         //a[]={2,3,11,20,16,-96,0,-5,17,-58,88,11};
    printf("Array Size : ");
    while(scanf("%d",&ara_size))
    {
        for(int j=0;j<ara_size;j++)
        {
            scanf("%d",&a[j]);
        }
        max=a[0],min=a[0];
        for(int i=1;i<ara_size;i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
            if(min>a[i])
            {
                min=a[i];
            }
        }
        printf("Max : %d\nMin : %d\nArray Size : ",max,min);
    }
}
