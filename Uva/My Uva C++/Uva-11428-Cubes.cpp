#include<stdio.h>
int main()
{
    int N,i,j,check;
    while(scanf("%d",&N)&&(N>0&&N<=10000))
    {
        check=0;
        for(i=1;i<N/2;i++)
        {
            for(j=i+1;j<N/2;j++)
            {
                if((j*j*j)-(i*i*i)==N)
                {
                    printf("%d %d\n",j,i);
                    check=1;
                    break;
                }
            }
            if(check==1) break;
        }
        if(check==0) printf("No solution\n");
    }
}
