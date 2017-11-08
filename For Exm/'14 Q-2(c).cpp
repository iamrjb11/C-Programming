#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter value of a: b: c:");
    scanf("%f%f%f",&a,&b,&c);
    int rem=b*b-4*a*c;
    if(rem<0)
    {
        printf("Roots are complex numbers\n");
    }
    else if(rem>0)
    {
        printf("Roots are real equal\n");
        float root;
        root=sqrt(rem);
        float x1,x2;
        x1=(-b+root)/(2*a);
        x2=(-b-root)/(2*a);
        printf("They are :-\nx1=%.3f\nx2=%.3f\n",x1,x2);
    }
    else
    {
        float x=-b/(2*a);
        printf("Roots are Equal\nThey are=%.3f\n",x);
    }
}
