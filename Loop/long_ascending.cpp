///* Take 4 numbers & Print Ascending Order

/**
Input         4 6 1 12
Output        1 4 6 12

Input         1 6 1 12
Output        1 1 6 12

Input         1 1 12 1
Output        1 1 1 12

Input         1 1 1 1
Output        1 1 1 1
**/

#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Input The Numbers:a:b:c:d:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if(a>b&&b>c&&c>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,c,b,a);
    }
    else if(a>b&&b>d&&d>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,d,b,a);
    }
    else if(a>d&&d>b&&b>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,b,d,a);
    }
    else if(a>c&&c>b&&b>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,b,c,a);
    }
    else if(a>d&&d>c&&c>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,c,d,a);
    }
    else if(a>c&&c>d&&d>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,d,c,a);
    }
    else if(b>a&&a>d&&d>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,d,a,b);
    }
    else if(b>a&&a>c&&c>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,c,a,b);
    }
    else if(b>c&&c>a&&a>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,a,c,b);
    }
    else if(b>d&&d>a&&a>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,a,d,b);
    }
    else if(b>d&&d>c&&c>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,c,d,b);
    }
    else if(b>c&&c>d&&d>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,d,c,b);
    }
    else if(d>c&&c>b&&b>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,b,c,d);
    }
    else if(d>c&&c>a&&a>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,a,c,d);
    }
    else if(d>b&&b>c&&c>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,c,b,d);
    }
    else if(d>a&&a>c&&c>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,c,a,d);
    }
    else if(d>b&&b>a&&a>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,a,b,d);
    }
    else if(d>a&&a>b&&b>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",c,b,a,d);
    }
    else if(c>d&&d>a&&a>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,a,d,c);
    }
    else if(c>d&&d>b&&b>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,b,d,c);
    }
    else if(c>a&&a>d&&d>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",b,d,a,c);
    }
    else if(c>b&&b>d&&d>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",a,d,b,c);
    }
    else if(c>b&&b>a&&a>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,a,b,c);
    }
    else if(c>a&&a>b&&b>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n%f\n",d,b,a,c);
    }
     else if(a==b&&b==c&&a>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n",d,a);
    }
    else if(a==b&&b==c&&d>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n",a,d);
    }
    else if(a==b&&b==d&&a>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n",c,a);
    }
    else if(a==b&&b==d&&c>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n",a,c);
    }
    else if((b==c&&c==d&&b>a)||(a==c&&c==d&&b>a))
    {
        printf("The Ascendin Order is:\n%f\n%f\n",a,b);
    }
    else if((b==c&&c==d&&a>b)||(a==c&&c==d&&a>b))
    {
        printf("The Ascendin Order is:\n%f\n%f\n",b,a);
    }
    else if(a==b&&c==d&&d>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n",a,d);
    }
    else if(a==c&&b==d&&d>a)
    {
         printf("The Ascendin Order is:\n%f\n%f\n",a,d);
    }
    else if(a==b&&c==d&&a>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n",d,a);
    }
    else if(a==c&&b==d&&a>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n",d,a);
    }
    else if(a==d&&b==c&&b>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n",a,b);
    }
    else if(a==d&&b==c&&a>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n",b,a);
    }
    else if(a==b&&a>c&&c>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",d,c,a);
    }
    else if(a==b&&c>a&&a>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",d,a,c);
    }
    else if(a==b&&a>d&&d>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",c,d,a);
    }
    else if(a==b&&d>c&&c>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,c,d);
    }
    else if(a==b&&c>d&&d>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,d,c);
    }
    else if(a==b&&d>a&&a>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",c,a,d);
    }
    else if(a==c&&a>d&&d>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",b,d,a);
    }
    else if(a==c&&a>b&&b>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",d,b,a);
    }
    else if(a==c&&d>a&&a>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",b,a,d);
    }
    else if(a==c&&b>a&&a>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",d,a,b);
    }
    else if(a==c&&d>c&&c>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,c,d);
    }
    else if(a==c&&c>d&&d>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,d,c);
    }
    else if(a==d&&a>c&&c>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",b,c,a);
    }
    else if(a==d&&a>b&&b>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",c,b,a);
    }
    else if(a==d&&b>c&&c>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,c,b);
    }
    else if(a==d&&c>b&&b>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,b,c);
    }
    else if(a==d&&b>a&&a>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",c,a,b);
    }
    else if(a==d&&c>a&&a>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",b,a,c);
    }
    else if(b==c&&b>d&&d>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,d,b);
    }
    else if(b==c&&b>a&&a>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",d,a,b);
    }
    else if(b==c&&a>d&&d>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",b,d,a);
    }
    else if(b==c&&d>a&&a>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",b,a,d);
    }
    else if(b==c&&a>b&&b>d)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",d,b,a);
    }
    else if(b==c&&d>b&&b>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,b,d);
    }
    else if(b==d&&b>c&&c>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,c,b);
    }
    else if(b==d&&b>a&&a>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",c,a,b);
    }
    else if(b==d&&a>c&&c>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",b,c,a);
    }
    else if(b==d&&c>a&&a>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",b,a,c);
    }
    else if(b==d&&a>b&&b>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",c,b,a);
    }
    else if(b==d&&c>b&&b>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,b,c);
    }
    else if(c==d&&c>b&&b>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,b,c);
    }
    else if(c==d&&c>a&&a>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",b,a,c);
    }
    else if(c==d&&a>b&&b>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",c,b,a);
    }
    else if(c==d&&b>a&&a>c)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",c,a,b);
    }
    else if(c==d&&a>c&&c>b)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",b,c,a);
    }
    else if(c==d&&b>c&&c>a)
    {
        printf("The Ascendin Order is:\n%f\n%f\n%f\n",a,c,b);
    }
   else
    {
        printf("Input Error!\n");
    }
    return 0;
}
