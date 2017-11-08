//factorial//
#include <stdio.h>
int main()
{
    int a,i;
    long long int s;
    while(1)
    {
        printf("Enter a number to find its factorial\n");
        scanf("%d", &a);
        s = 1;
        if(a<0)
        {
            printf("ERROR!!\n\n");
        }
        else
        {
            for(i=1; i<=a; i++)
            {
                s*=i;
            }

            printf("%lld\n",s);

        }
    }
}
