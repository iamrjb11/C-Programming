///* A Robot

#include<stdio.h>
int main()
{
    char ara[100][100],cmd;
    int x,y,n,i,j;
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            ara[i][j]=1;
        }
    }
    printf("Koto gulo Restriction Number Ase : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Restriction Point Number %d : ",i+1);
        scanf("%d%d",&x,&y);
        ara[x][y]=0;
    }
    printf("Enter Your Starting Point : ");
    scanf("%d%d",&x,&y);
    int ch=0;
    //printf("Enter Your Com : ");
    while(scanf("%c",&cmd)==1)
    {

        //scanf("%c",&cmd);
        if(cmd=='U') x--;
        else if(cmd=='D') x++;
        else if(cmd=='R') y++;
        else if(cmd=='L') y--;
        else if(cmd=='S') printf("Now Your Position is (%d , %d)\n",x,y);
        if(ara[x][y]!=1&&cmd!='S')
        {
            if(cmd=='U') x++;
            else if(cmd=='D') x--;
            else if(cmd=='R') y--;
            else if(cmd=='L') y++;
            //else if(cmd=='S') printf("(%d , %d) Ending Position (%d , %d)\n",a,b,x,y);
        }
        //ch++;
        //printf("Ch=%d\n",ch);
        printf("Enter Your Com : ");
    }
}
