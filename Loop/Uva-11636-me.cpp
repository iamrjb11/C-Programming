#include<stdio.h>
int main()
{
    long long int N;
    int r,X=1,Y;
    while(scanf("%lld",&N)&&(N>=0))
    {
        if(N==0)
        {
            printf("");
        }
        else if(N==1)
        {
            printf("Case %d : 0\n",X);
        }
        else
        {
            Y=0;
            for(r=1;r<N;r=r)
            {
                r=r*2;
                Y=Y+1;
            }
            printf("Case %d : %d\n",X,Y);
        }
        X++;
    }
}
