/// 1/1*2+1/2*3+1/3*4+1/4*5+..........

#include<stdio.h>
int main()
{
    float i,j,sum;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        j=1;
        for(i=1;i<=n;i++)
        {
            sum=sum+(float)(1/(j*(j+1)));
            printf("%f ",sum);
            j++;
        }
        printf("\nSum : %f\n",sum);
    }
}
