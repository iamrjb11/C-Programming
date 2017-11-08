#include <stdio.h>
int main()
{
    int n1,n2,i,j,flag;
    printf("Enter two numbers:  \n");
    scanf("%d %d", &n1,&n2);

    for(i=n1; i<=n2; i++)
    {
        flag = 1;
        if(i==1)
        {
            flag = 0;
        }
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag = 0;
                break;
            }

        }
        if(flag==1)
        {
            printf("%d  ", i);
        }
    }
}
