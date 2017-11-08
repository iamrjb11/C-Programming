///* A Robot

#include<stdio.h>
int main()
{
    char ara[100][100],cmd;
    int x,y;
    printf("Inicial Points :");
    scanf("%d%d",&x,&y);
    int a=x,b=y;

    for(int i=0;;i++)
    {
        printf("Enter Your Com : ");
        scanf("%c",&cmd);
        if(cmd=='U') x--;
        else if(cmd=='D') x++;
        else if(cmd=='R') y++;
        else if(cmd=='L') y--;
        else if(cmd=='S')
        {
            printf("(%d , %d) Ending Position (%d , %d)\n",a,b,x,y);
        }
    }
}
