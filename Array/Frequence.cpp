/**  Frequence
Input    6
         2 2 3 3 2 8
Output   2=3
         3=2
         8=1
**/

#include<stdio.h>
int main()
{
    int a[100],b[100]={0};
    int i,n;
    printf("Array Size : ");
    scanf("%d",&n);
    printf("Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max) max = a[i];
    }
    printf("Max=%d\n",max);
    for(i=0;i<n;i++)
    {
        (b[a[i]])++;
        //printf("a[%d]=%d , b[%d]=%d\n",i,a[i],a[i],b[a[i]]);
    }
    printf("Elements   Frequence\n");
    for(i=0;i<=max;i++)
    {
        if(b[i]) printf("   %d     =     %d\n",i,b[i]);
    }

}
