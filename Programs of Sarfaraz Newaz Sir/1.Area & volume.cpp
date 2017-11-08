/*Measurement of Triangle,Reactangle,Circle,Sphere,Cylinder*/
#include<stdio.h>

int main()
{
    char n;
    printf("What do you want to calculate??\n");
    printf("A.Area of Triagle\n");
    printf("B.Area of Rectangle\n");
    printf("C.Area of Circle\n");
    printf("D.Volume of Sphere\n");
    printf("E.Volume of Cylinder\n");
    scanf("%c", &n);

if(n=='A')
{
    float height,base,area;
    printf("Enter the height of Triangle is: ");
    scanf("%f", &height);
    printf("Enter the base of Triangle: ");
    scanf("%f", &base);
    area = 0.5 * (height * base);
    printf("the area is: %f", area);

}
else if(n=='B')
{
    float length,width,area;
    printf("Enter the Length of Rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of Rectangle: ");
    scanf("%f", &width);
    area = length * width;
    printf("The area is: %f", area);
}
else if(n=='C')
{
    float radius,area;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);
    area = 3.1416 * (radius*radius);
    printf("the area is: %f",area);

}
else if(n=='D')
{
    float radius,volume;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);
    volume = (4/3) * 3.1416*(radius*radius*radius);
    printf("the volume is: %f", volume);

}
else if(n=='E')
{
    float radius,height,volume;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);
    printf("Enter the value of height: ");
    scanf("%f", &height);
    volume = 3.1416 * (radius*radius) * height;
    printf("the volume is: %f",volume);

}
 return 0;
}

