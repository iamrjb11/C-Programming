#include <stdio.h>
int main()
{
    int ara[30],i,num,sum=0;
    double avg;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<num;i++)
    {
        sum = sum + ara[i];
    }
    avg = sum/num;
    printf("%lf",avg);

}
