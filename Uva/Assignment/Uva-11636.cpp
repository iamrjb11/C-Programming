/// Uva - Hello Word !

#include<stdio.h>
#include<math.h>
int main()
{
    int input,r,x=1;
    while(scanf("%d",&input)!=EOF && (input>=0))
    {
        if(input==1)
        {
            printf("Case %d: 0\n",x);
        }
        for(r=0;r<14;r++)
        {
            if(pow(2,r)<input&&input<=pow(2,r+1))
            {
                printf("Case %d: %d\n",x,r+1);
            }
        }
        x++;
    }
    return 0;
}
