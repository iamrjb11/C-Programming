#include<stdio.h>
int main()
{
    int N,K,P;
    int c=1,t;
    scanf("%d",&t);  //test case
    while((t--)&&t<=1000&&scanf("%d%d%d",&N,&K,&P)&&1<=N<=23&&1<=K<=N&&2<=P<=200)  //intput
    {
        int i,j,k;
        for(i=0;i<P;i++)
        {
            if(K==N) K=0;
            K++;
        }
        printf("Case %d: %d\n",c,K);
        c++;
    }
}
