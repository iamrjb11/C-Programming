///* Take A Point & Find The Quadrants

/**
Input   (0,0)
Output  Origin Point
Input   (3,0)
Output  +X Axis
Input   (0,-3)
Output  -Y Axis
Input   (3,-4)
Output  4th Quadrant
Input   (-3,-6)
Output  3th Quadrant
**/


#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0&&b==0) printf("(%d,%d) is Origin Point\n",a,b);
        else if(a>0&&b==0) printf("(%d,%d) is +X Axis\n",a,b);
        else if(a<0&&b==0) printf("(%d,%d) is -X Axis\n",a,b);
        else if(a==0&&b>0) printf("(%d,%d) is +Y Axis\n",a,b);
        else if(a==0&&b<0) printf("(%d,%d) is -Y Axis\n",a,b);
        else if(a>0&&b>0) printf("(%d,%d) is in 1st Quadrant\n",a,b);
        else if(a<0&&b>0) printf("(%d,%d) is in 2nd Quadrant\n",a,b);
        else if(a<0&&b<0) printf("(%d,%d) is in 3rd Quadrant\n",a,b);
        else if(a>0&&b<0) printf("(%d,%d) is in 4th Quadrant\n",a,b);
    }
}

