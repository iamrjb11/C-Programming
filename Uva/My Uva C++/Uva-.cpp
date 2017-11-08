#include<stdio.h>
int main()
{
    int a[10000];
    int i,j,n;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int dis;
        if(a[0]<a[1]) dis=a[1]-a[0];
        else dis=a[0]-a[1];
        int check=1,rem;
        for(i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                rem=a[i+1]-a[i];
            }
            else rem=a[i]-a[i+1];
            if(rem==dis) dis--;
            else
            {
                check=0;
                break;
            }
            if(i==n-2)
            {
                if(rem!=1) check=0;
            }
        }
        if(check==1) printf("Jolly\n");
        else printf("Not Jolly\n");
    }
    return 0;
}
