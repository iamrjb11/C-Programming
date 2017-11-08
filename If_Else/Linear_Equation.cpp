//* Linear Equation *//



#include<stdio.h>

int main()

{
    int x1,x2,y1,y2,a,b,c;
    printf("Enter the value of x1:");
    scanf("%d",&x1);
    printf("Enter the value of y1:");
    scanf("%d",&y1);

    printf("Enter the value of x2:");
    scanf("%d",&x2);
    printf("Enter the value of y2:");
    scanf("%d",&y2);
    printf("\n");

    a=y1-y2;                     /*a = co-efficient of x*/
    b=x1-x2;                    /*b = co-efficient of y*/
    c=(x2*y1)-(x1*y2);                 /*c = constant */

    if(a>1)
    {
        if(b>1)
        {
            if(c>=0)
            {
                printf("The Equation is:%dx-%dy-%d=0",a,b,c);
            }
            else
            {
                printf("The Equation is:%dx-%dy+%d=0",a,b,-c);
            }
        }
        if(b==1)
        {
            if(c>=0)
            {
                printf("The Equation is:%dx-y-%d=0",a,c);
            }
            else
            {
                printf("The Equation is:%dx-y+%d=0",a,-c);
            }
        }
        if(b==0)
        {
            if(c>=0)
            {
                printf("The Equation is:%dx-%d=0",a,c);
            }
            else
            {
                printf("The Equation is:%dx+%d=0",a,-c);
            }
        }
        if(b==-1)
        {
            if(c>=0)
            {
                printf("The Equation is:%dx+%dy-%d=0",a,-b,c);
            }
            else
            {
                printf("The Equation is:%dx+%dy+%d=0",a,-b,-c);
            }
        }
        if(b<-1)
        {
            if(c>=0)
            {
                printf("The Equation is:%dx+%dy-%d=0",a,-b,c);
            }
            else
            {
                printf("The Equation is:%dx+%dy+%d=0",a,-b,-c);
            }
        }
    }
    if(a==1)
    {
        if(b>1)
        {
            if(c>=0)
            {
                printf("The Equation is:x-%dy-%d=0",b,c);
            }
            else
            {
                printf("The Equation is:x-%dy+%d=0",b,-c);
            }
        }
        if(b==1)
        {
             if(c>=0)
            {
                printf("The Equation is:x-y-%d=0",c);
            }
            else
            {
                printf("The Equation is:x-y+%d=0",-c);
            }
        }
        if(b==0)
        {
              if(c>=0)
            {
                printf("The Equation is:x-%d=0",c);
            }
            else
            {
                printf("The Equation is:x+%d=0",-c);
            }
        }
        if(b==-1)
        {
            if(c>=0)
            {
                printf("The Equation is:x+y-%d=0",c);
            }
            else
            {
                printf("The Equation is:x+y+%d=0",-c);
            }
        }
        if(b<-1)
        {
            if(c>=0)
            {
                printf("The Equation is:x+%dy-%d=0",-b,c);
            }
            else
            {
                printf("The Equation is:x+%dy+%d=0",-b,-c);
            }
        }
    }
    if(a==0)
    {
        if(b>1)
        {
            if(c>=0)
            {
                printf("The Equation is:-%dy-%d=0",b,c);
            }
            else
            {
                printf("The Equation is:-%dy+%d=0",b,-c);
            }
        }
        if(b==1)
        {
            if(c>=0)
            {
                printf("The Equation is:%-y-%d=0",c);
            }
            else
            {
                printf("The Equation is:%-y+%d=0",-c);
            }
        }
        if(b==0)
        {
            printf("Wrong Input.Can't Solve");
        }
        if(b==-1)
        {
           if(c>=0)
            {
                printf("The Equation is:y-%d=0",c);
            }
            else
            {
                printf("The Equation is:y+%d=0",-c);
            }
        }
        if(b<-1)
        {
            if(c>=0)
            {
                printf("The Equation is:%dy-%d=0",-b,c);
            }
            else
            {
                printf("The Equation is:%dy+%d=0",-b,-c);
            }
        }
    }
    if(a==-1)
    {
        if(b>1)
        {
            if(c>=0)
            {
                printf("The Equation is:-x-%dy-%d=0",b,c);
            }
            else
            {
                printf("The Equation is:-x-%dy+%d=0",b,-c);
            }
        }
        if(b==1)
        {
           if(c>=0)
            {
                printf("The Equation is:-x-y-%d=0",c);
            }
            else
            {
                printf("The Equation is:-x-y+%d=0",-c);
            }
        }
        if(b==0)
        {
            if(c>=0)
            {
                printf("The Equation is:-x-%d=0",c);
            }
            else
            {
                printf("The Equation is:-x+%d=0",-c);
            }
        }
        if(b==-1)
        {
           if(c>=0)
            {
                printf("The Equation is:-x+y-%d=0",c);
            }
            else
            {
                printf("The Equation is:-x+y+%d=0",-c);
            }
        }
        if(b<-1)
        {
            if(c>=0)
            {
                printf("The Equation is:-x+%dy-%d=0",-b,c);
            }
            else
            {
                printf("The Equation is:-x+%dy+%d=0",-b,-c);
            }
        }
    }
    if(a<-1)
    {
        if(b>1)
        {
            if(c>=0)
            {
                printf("The Equation is:-%dx-%dy-%d=0",-a,b,c);
            }
            else
            {
                printf("The Equation is:-%dx-%dy+%d=0",-a,b,-c);
            }
        }
        if(b==1)
        {
            if(c>=0)
            {
                printf("The Equation is:-%dx-y-%d=0",-a,c);
            }
            else
            {
                printf("The Equation is:-%dx-y+%d=0",-a,-c);
            }
        }
        if(b==0)
        {
            if(c>=0)
            {
                printf("The Equation is:-%dx-%d=0",-a,c);
            }
            else
            {
                printf("The Equation is:-%dx+%d=0",-a,-c);
            }
        }
        if(b==-1)
        {
            if(c>=0)
            {
                printf("The Equation is:-%dx+y-%d=0",-a,c);
            }
            else
            {
                printf("The Equation is:-%dx+%d=0",-a,-c);
            }
        }
        if(b<-1)
        {
            if(c>=0)
            {
                printf("The Equation is:-%dx+%dy-%d=0",-a,-b,c);
            }
            else
            {
                printf("The Equation is:-%dx+%dy+%d=0",-a,-b,-c);
            }
        }

    }
}
