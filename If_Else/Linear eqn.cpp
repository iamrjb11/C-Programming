/*Program for Creating Linear Equation*/

#include<stdio.h>
#include<conio.h>

int main()

{
    int x1, x2, y1, y2, a, b, c;

    printf("Enter the value of (x1,y1) using space : ");
    scanf("%d %d",&x1,&y1);

    printf("Enter the value of (x2,y2) using space : ");
    scanf("%d %d",&x2,&y2);

    printf("\n");

    a=y1-y2;                            /*a = co-efficient of x*/
    b=x1-x2;                            /*b = c0-efficient of y*/
    c=(x2*y1)-(x1*y2);                          /*c = constant*/

    if(a>1)
    {
        if(b>1)printf("The equation is : %dx-%dy=%d",a,b,c);
        if(b<-1)printf("The equation is : %dx+%dy=%d",a,-b,c);
        if(b==1)printf("The equation is : %dx-y=%d",a,c);
        if(b==-1)printf("The equation is : %dx+y=%d",a,c);
        if(b==0)printf("The equation is : %dx=%d",a,c);
    }

    if(a<-1)
    {
        if(b>1)printf("The equation is : -%dx-%dy=%d",-a,b,c);
        if(b<-1)printf("The equation is : -%dx+%dy=%d",-a,-b,c);
        if(b==1)printf("The equation is : -%dx-y=%d",-a,c);
        if(b==-1)printf("The equation is : -%dx+y=%d",-a,c);
        if(b==0)printf("The equation is : -%dx=%d",-a,c);
    }

    if(a==1)
    {
        if(b>1)printf("The equation is : x-%dy=%d",b,c);
        if(b<-1)printf("The equation is : x+%dy=%d",-b,c);
        if(b==1)printf("The equation is : x-y=%d",c);
        if(b==-1)printf("The equation is : x+y=%d",c);
        if(b==0)printf("The equation is : x=%d",c);
    }

    if(a==-1)
    {
        if(b>1)printf("The equation is : -x-%dy=%d",b,c);
        if(b<-1)printf("The equation is : -x+%dy=%d",-b,c);
        if(b==1)printf("The equation is : -x-y=%d",c);
        if(b==-1)printf("The equation is : -x+y=%d",c);
        if(b==0)printf("The equation is : -x=%d",c);
    }

    if(a==0)
    {
        if(b>1)printf("The equation is : -%dy=%d",b,c);
        if(b<-1)printf("The equation is : %dy=%d",-b,c);
        if(b==1)printf("The equation is : -y=%d",c);
        if(b==-1)printf("The equation is : y=%d",c);
        if(b==0)printf("Wrong Input. Can't Solve.");
    }

    getch();
}
