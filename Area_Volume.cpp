//* Area or Volume *//


#include<stdio.h>
int main()

{
    char ch;
    printf("A.Area of Triangle\nB.Area of Rectengle\nC.Area of Circle\nD.Volume of Sphere\nE.Volume of Cylinder\n");
    scanf("%c",&ch);
    if(ch=='A'||ch=='a')
    {
        float b,h,area;
        printf("Input the base: ");
        scanf("%f",&b);
        printf("Input the height: ");
        scanf("%f",&h);
        area=(b*h)/2;
        printf("The area of Triangle is:%f square unit\n",area);
    }
    else if(ch=='B'||ch=='b')
    {
        float l,w,area;
        printf("Input the length: ");
        scanf("%f",&l);
        printf("Input the width: ");
        scanf("%f",&w);
        area=l*w;
        printf("The area of Rectangle is:%f square unit\n",area);
    }
    else if(ch=='C'||ch=='c')
    {
        float r;
        double pi=3.1415926535,area;
        printf("Input the radius: ");
        scanf("%f",&r);
        area=pi*r*r;
        printf("The area of Circle is:%lf square unit\n",area);
    }
    else if(ch=='D'||ch=='d')
    {
        float r;
        double pi=3.1415926535,volume;
        printf("Input the radius: ");
        scanf("%f",&r);
        volume=(4/3)*(pi*r*r*r);
        printf("The volume of Sphere is:%lf cubic unit\n",volume);
    }
    else if(ch=='E'||ch=='e')
    {
        float r,h;
        double pi=3.1415926535,volume;
        printf("Input the radius: ");
        scanf("%f",&r);
        printf("Input the height: ");
        scanf("%f",&h);
        volume=pi*r*r*h;
        printf("The volume of Cylinder is:%lf cubic unit\n",volume);
    }
    else
    {
        printf("Input Error !");
    }
    return 0;
}
