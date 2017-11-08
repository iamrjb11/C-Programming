//* Ascending_Order *//


#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Input The Numbers:a:b:c:d:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if(a>=b&&b>=c&&c>=d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,c,b,a);
    }
    else if(a>=b&&b>=d&&d>=c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,d,b,a);
    }
    else if(a>=d&&d>=b&&b>=c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,b,d,a);
    }
    else if(a>=c&&c>=b&&b>=d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,b,c,a);
    }
    else if(a>=d&&d>=c&&c>=b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,c,d,a);
    }
    else if(a>=c&&c>=d&&d>=b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,d,c,a);
    }
    else if(b>=a&&a>=d&&d>=c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,d,a,b);
    }
    else if(b>=a&&a>=c&&c>=d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,c,a,b);
    }
    else if(b>=c&&c>=a&&a>=d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,a,c,b);
    }
    else if(b>=d&&d>=a&&a>=c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,a,d,b);
    }
    else if(b>=d&&d>=c&&c>=a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,c,d,b);
    }
    else if(b>=c&&c>=d&&d>=a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,d,c,b);
    }
    else if(d>=c&&c>=b&&b>=a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,b,c,d);
    }
    else if(d>=c&&c>=a&&a>=b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,a,c,d);
    }
    else if(d>=b&&b>=c&&c>=a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,c,b,d);
    }
    else if(d>=a&&a>=c&&c>=b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,c,a,d);
    }
    else if(d>=b&&b>=a&&a>=c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,a,b,d);
    }
    else if(d>=a&&a>=b&&b>=c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,b,a,d);
    }
    else if(c>=d&&d>=a&&a>=b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,a,d,c);
    }
    else if(c>=d&&d>=b&&b>=a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,b,d,c);
    }
    else if(c>=a&&a>=d&&d>=b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,d,a,c);
    }
    else if(c>=b&&b>=d&&d>=a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,d,b,c);
    }
    else if(c>=b&&b>=a&&a>=d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,a,b,c);
    }
    else if(c>=a&&a>=b&&b>=d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,b,a,c);
    }
   else
    {
        printf("Input Error!\n");
    }
    return 0;
}
