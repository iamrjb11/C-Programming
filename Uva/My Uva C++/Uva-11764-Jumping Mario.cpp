#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int N,i,j,cas=1,jump[10000];
    while(T--)
    {
        if(T>=29) break;
        int high_jump=0,low_jump=0;
        scanf("%d",&N);
        if(N<0||N>49) break;
        for(i=0;i<N;i++)
        {
            scanf("%d",&jump[i]);
        }
        for(j=1,i=0;i<N-1;i++,j++)
        {
            if(jump[i]==jump[j]) continue;
            else if(jump[i]<jump[j]) high_jump++;
            else low_jump++;
        }
        printf("Case %d: %d %d\n",cas,high_jump,low_jump);
        cas++;
    }
}
