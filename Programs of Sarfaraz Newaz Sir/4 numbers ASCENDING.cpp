#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("Enter fourth number: ");
    scanf("%d", &d);
    if(a==b || b==c ||c==d || d==a)
        printf("Input Error.Please Enter Four Different Numbers");
    else if(a<b&&b<c&&c<d)
        printf("%d %d %d %d",a,b,c,d);
    else if(a<b&&b<d&&d<c)
        printf("%d %d %d %d",a,b,d,c);
    else if(a<c&&c<b&&b<d)
        printf("%d %d %d %d",a,c,b,d);
    else if(a<c&&b<d&&d<b)
        printf("%d %d %d %d",a,c,d,b);
    else if(a<d&&d<b&&b<c)
        printf("%d %d %d %d",a,d,b,c);
    else if(a<d&&d<c&&c<b)
        printf("%d %d %d %d",a,d,c,b);
    else if(b<a&&a<c&&c<d)
        printf("%d %d %d %d",b,a,c,d);
    else if(b<a&&a<d&&d<c)
        printf("%d %d %d %d",b,a,d,c);
    else if(b<c&&c<a&&a<d)
        printf("%d %d %d %d",b,c,a,d);
    else if(b<c&&c<d&&d<a)
        printf("%d %d %d %d",b,c,d,a);
    else if(b<d&&d<a&&a<c)
        printf("%d %d %d %d",b,d,a,c);
    else if(b<d&&d<c&&c<a)
        printf("%d %d %d %d",b,d,c,a);
    else if(c<a&&a<b&&b<d)
        printf("%d %d %d %d",c,a,b,d);
    else if(c<a&&a<d&&d<b)
        printf("%d %d %d %d",c,a,d,b);
    else if(c<b&&b<a&&a<d)
        printf("%d %d %d %d",c,b,a,d);
    else if(c<b&&b<d&&d<a)
        printf("%d %d %d %d",c,b,d,a);
    else if(c<d&&d<a&&a<b)
        printf("%d %d %d %d",c,d,a,b);
    else if(c<d&&d<b&&b<a)
        printf("%d %d %d %d",c,d,b,a);
    else if(d<a&&a<b&&b<c)
        printf("%d %d %d %d",d,a,b,c);
    else if(d<a&&a<c&&c<b)
        printf("%d %d %d %d",d,a,c,b);
    else if(d<b&&b<a&&a<c)
        printf("%d %d %d %d",d,b,a,c);
    else if(d<b&&b<c&&c<a)
        printf("%d %d %d %d",d,b,c,a);
    else if(d<c&&c<a&&a<b)
        printf("%d %d %d %d",d,c,a,b);
    else if(d<c&&c<b&&b<a)
        printf("%d %d %d %d",d,c,b,a);
    return 0;
}

