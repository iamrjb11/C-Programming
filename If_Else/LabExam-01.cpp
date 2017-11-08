//150211
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Input the  Numbers-a:b:c:");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b&&b>c)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",a,b,c);
    }
    else if(b>a&&a>c)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",b,a,c);
    }
    else if(a>c&&c>b)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",a,c,b);
    }
    else if(b>c&&c>a)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",b,c,a);
    }
    else if(c>b&&b>a)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",c,b,a);
    }
    else if(c>a&&a>b)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",c,a,b);
    }
    else if(a==b&&b==c)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",a,b,c);
    }
    else if(a==b&&c>a&&c>b)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",c,a,b);
    }
    else if(a==c&&b>a&&b>c)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",b,a,c);
    }
    else if(b==c&&a>b&&a>c)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",a,b,c);
    }
    else if(a==b&&c<a&&c<b)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",a,b,c);
    }
    else if(a==c&&b<a&&b<c)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",a,c,b);
    }
    else if(b==c&&a<b&&a<c)
    {
        printf("The desinding Order is:\n%f\n%f\n%f\n",b,c,a);
    }
    else
    {
        printf("Input Error!\n");
    }
    return 0;
}
