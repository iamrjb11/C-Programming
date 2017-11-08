#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,rm,rm2,temp,check;
    scanf("%d%d",&m,&n);
    if(m>n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    for(i=m;i<=n;i++)
    {
        check=1;
        if(i==1) check=0;
        else if(i==2) check=1;
        else if(i%2==0) check=0;
        else
        {

            for(j=3;j<=sqrt(i);j=j+2)
            {
                if(i%j==0) check=0;
            }
        }
        if(check==1) printf("%d ",i);
    }
    printf("\n");
}
