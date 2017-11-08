#include <stdio.h>

int main()
{
    int b, p;
    float mul = 1.0;
    scanf("%d %d", &b, &p);

    if(p>0)
    {
        for(int i = 1; i <= p; i++)
        {
            mul *= b;
        }
    }
    else if(p<0)
    {
        for(int i = -1; i >= p; i--)
        {
            mul /= b;
        }
    }

    printf("%.10f", mul);

    return 0;
}
