#include<stdio.h>
int main()
{
    long int n;
    long int age[2000005];
    int i,j,ch;
    while(scanf("%ld",&n)&&n>0&&n<2000001)
    {
        for(i=0;i<n;i++)
        {
            scanf("%ld",&age[i]);
            if(age[i]>100)
            {
                ch=0;
                break;
            }
        }
        if(ch==0) break;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(age[i]>age[j])
                {
                    int temp=age[i];
                    age[i]=age[j];
                    age[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%ld ",age[i]);
        }
        printf("\n");
    }
}
