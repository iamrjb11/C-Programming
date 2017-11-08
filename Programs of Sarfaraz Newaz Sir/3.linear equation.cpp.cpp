/*Linear - Eqution*/
#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,a,b,c;
    printf("Input the number as x1:  ");
    scanf("%d", &x1);
    printf("Input the number as y1:  ");
    scanf("%d", &y1);
    printf("Input the number as x2:  ");
    scanf("%d", &x2);
    printf("Input the number as y2:  ");
    scanf("%d", &y2);
    a=y1-y2;
    b=x2-x1;
    c=(y1*(x1-x2)-x1*(y1-y2));
    if(a==0 && b==1 && c>0)
    {
        printf("y+%d=0,c");
    }
    else if(a==0 && b==-1 && c>0)
    {
        printf("-y+%d=0",c);
    }
    else if(a==0&& b==1 && c<0 )
    {
        printf("y%d=0",c);
    }
    else if(a==0 && b==-1 && c<0)
    {
        printf("-y%d=0",c);
    }
    else if(a==1 && b==0 && c>0)
    {
        printf("x+%d=0",c);
    }
    else if(a==1 && b==0 && c<0)
    {
        printf("x%d=0",c);
    }
    else if(a==-1 && b==0 && c>0)

    {
        printf("-x+%d=0",c);
    }
    else if(a==-1 && b==0 && c<0)
    {
        printf("-x%d=0",c);
    }
    else if(a==1 && b==1 && c>0)
    {
        printf("x+y+%d=0",c);
    }
    else if(a==1 && b==1 && c<0)
    {
        printf("x+y%d=0",c);
    }
    else if(a==1 && b==1 && c==0)
    {
        printf("x+y=0");
    }
    else if(a==1 && b==-1  && c>0)
    {
        printf("x-y+%d=0",c);
    }
    else if(a==1 && b==-1 && c<0)
    {
        printf("x-y%d=0",c);
    }
    else if(a==1 && b==-1 && c==0)
    {
        printf("x-y=0");
    }
    else if(a==-1 && b==1 && c>0)
    {
        printf("-x+y+%d",c);
    }
    else if(a==-1 && b==1 && c<0)
    {
        printf("-x+y%d=0",c);
    }
    else if(a==-1 && b==1 && c==0)
    {
        printf("-x+y=0");
    }
    else if(a==-1 && b==-1 && c>0)
    {
        printf("-x-y+%d=0",c);
    }
    else if(a==-1 && b==-1 && c<0)
    {
        printf("-x-y%d=0",c);
    }
    else if(a==-1 && b==-1 && c==0)
    {
        printf("-x-y=0");
    }

    else if(a==-1 && b>0 && c>0)
    {
        printf("-x+%d+%d=0",b,c);
    }
    else if(a==-1 && b<0 && c>0)
    {
        printf("-x%dy+%d=0",b,c);
    }
    else if(a==-1&& b>0 && c<0)
    {
        printf("-x+%dy%d=0",b,c);
    }
    else if(a==-1 && b<0 && c<0)
    {
        printf("-x%dy%d=0",b,c);
    }
    else if(a==1 && b>0 && c>0)
    {
        printf("x+%dy+%d=0",b,c);
    }
    else if(a==1 && b<0 && c>0)
    {
        printf("x%dy+%d=0",b,c);
    }
    else if(a==1 && b>0 && c<0)
    {
        printf("x+%dy%d=0",b,c);
    }
    else if(a==1 && b<0 && c<0)
    {
        printf("x%d%d=0",b,b);
    }
    else if(a>1 && b==1 && c>0)
    {
        printf("%dx+y+%d=0",a,c);
    }
    else if(a<-1 && b==1 && c>0)
    {
        printf("%dx+y+%d=0",a,c);
    }
    else if(a>1 && b==1 && c<0)
    {
        printf("%dx+y%d=0",a,c);
    }
    else if(a<-1 && b==1 && c<0)
    {
        printf("%dx+y%d=0",a,c);
    }

    else if(a>1 && b==-1 && c>0)
    {
        printf("%dx-y+%d",a,c);
    }
    else if(a>1 && b==-1 && c<0)
    {
        printf("%dx-y%d=0",a,c);
    }
    else if(a<-1 && b==-1 && c>0)
    {
        printf("%dx-y+%d=0",a,c);
    }
    else if(a<-1 && b==-1 && c<0)
    {
        printf("%dx-y%d=0",a,c);
    }

    else if(a==-1 && b<-1 && c==0)
    {
        printf("-x%dy=0",b,c);
    }
    else if(a==-1&& b>1 && c==00)
    {
        printf("-x+%dy=0",b,c);
    }
    else if(a==-1 && b<-1 && c==0)
    {
        printf("-x%dy=0",b,c);
    }
    else if (a==1 && b>1 && c==0)
    {
        printf("x+%dy=0",b,c);
    }
    else if(a==1 && b<-1 && c==0)
    {
        printf("x%dy=0",b,c);
    }
    else if(a==1 && b>1 && c==0)
    {
        printf("x+%dy=0",b,c);
    }
    else if(a==1 && b<-1 && c==0)
    {
        printf("x%dy=0",b,b);
    }
    else if(a>1 && b==1 && c==0)
    {
        printf("%dx+y=0",a,c);
    }
    else if(a<-1 && b==1 && c==0)
    {
        printf("%dx+y=0",a,c);
    }
    else if(a>1 && b==1 && c==0)
    {
        printf("%dx+y=0",a,c);
    }
    else if(a<-1 && b==1 && c==0)
    {
        printf("%dx+y=0",a,c);
    }

    else if(a>1 && b==-1 && c==0)
    {
        printf("%dx-y=0",a,c);
    }
    else if(a>1 && b==-1 && c==0)
    {
        printf("%dx-y=0",a,c);
    }
    else if(a<-1 && b==-1 && c==0)
    {
        printf("%dx-y=0",a,c);
    }
    else if(a<-1 && b==-1 &&c==0)
    {
        printf("%dx-y=0",a,c);
    }
    else if(a>1 && b>1 && c==0)
    {
        printf("%dx+%dy=0",a,b);
    }
    else if(a>1 && b<-1 && c==0)
    {
        printf("%dx%dy=0",a,b);
    }
    else if(a<-1 && b>1 && c==0)
    {
        printf("%dx+%dy=0",a,b);
    }
    else if(a<-1 && b<-1 && c==0)
    {
        printf("%dx%dy=0",a,b);
    }
    if(a==0&& b>1&&c>0)
    {
        printf("%dy+%d=0",b,c);
    }
    else if(a==0 && b<-1 && c>0 )
    {
        printf("%dy+%d=0",b,c);
    }
    else if(a==0 && b>1 && c<0)
    {
        printf("%dy%d=0",b,c);
    }
    else if(a==0 && b<-1 && c<0)
    {
        printf("%dy%d=0",b,c);
    }
    else if(a>1 && b==0 && c>0)
    {
        printf("%dx+%d=0",a,c);
    }
    else if(a>1 && b==0 &&c<0)
    {
        printf("%dx%d=0",a,c);
    }
    else if(a<-1 && b==0 && c>0)
    {
        printf("%dx+%d=0",a,c);
    }
    else if(a<-1 && b==0 && c<0)
    {
        printf("%dx%d=0",a,c);
    }
    else if(a>1&&b>1&&c>0)
    {
        printf("%dx+%dy+%d=0",a,b,c);
    }
    else if (a>1&&b>1&&c<0)
    {
        printf("%dx+%dy%d=0",a,b,c);

    }
    else if(a>1&&b<-1&&c>0)
    {
        printf("%dx%dy+%d=0",a,b,c);
    }
    else if(a>1&&b<-1&&c<0)
    {
        printf("%dx%dy%d=0",a,b,c);
    }
    else if(a<-1&&b>1&c>0)

    {
        printf("%dx+%dy+%d=0",a,b,c);
    }
    else if(a<-1&&b>1&&c<0)
    {
        printf("%dx+%dy%d=0",a,b,c);
    }
    else if(a<-1&&b<-1&&c>0)
    {
        printf("%dx%dy+%d=0",a,b,c);
    }
    else if(a<-1&&b<-1&&c<0)
    {
        printf("%dx%dy%d=0",a,b,c);
    }





}
