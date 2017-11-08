//student ID - 150217//
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter Two numbers separated by space  \n");
    scanf("%d %d", &x,&y);
    if(x==0 && y==0)
        printf("the number is in the origin");
    if(x>0 && y==0)
        printf("the number is on +X axis");
    if(x<0 && y==0)
        printf("the number is on -X axis");
    if(x>0 && y>0)
        printf("the number is at first quardant");
    if(x==0 && y>0)
        printf("the number is on +Y axis");
    if(x==0 && y<0)
        printf("the number is on -Y axis");
    if(x<0 && y>0)
        printf("the number is at second quardant");
    if(x<0 && y<0)
        printf("the number is at third quardant");
    if(x>0 && y<0)
        printf("the number is at fourth quardant");
}
