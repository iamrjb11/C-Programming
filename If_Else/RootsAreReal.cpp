//* Roots Are Real or Not *//
/**
Input   3 -8 4
Output  2.0000  0.6777777
Input
Output
**/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,equation;

    printf("a:b:c:");
    scanf("%d%d%d",&a,&b,&c);
    equation=(b*b-4*a*c);

    if(equation<0)
    {
        printf("\nRoots are not real number, imaginary\n");
    }
    else
    {
        if(equation==0)
        {
            printf("Show Roots are equal.\n");
            float x;
            x=-b/(2*a);
            printf("Both Roots are:%f\n",x);
        }
        else
        {
            float rootD;
            rootD=sqrt(equation);
            float x1,x2;
            x1=(-b+rootD)/(2*a);
            x2=(-b-rootD)/(2*a);
            printf("\nRoots are %f and %f\n",x1,x2);
            }

    }
}

