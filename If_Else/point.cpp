//* Divided Ponits *//

#include<stdio.h>
int main()

{
    printf("input a number:");
    int n;
    scanf("%d",&n);
    if(n%4==0&&n%6==0&&n%8==0)
    {
        printf("You get 1800 ponits\n");
    }
    else if(n%4==0&&n%8==0)
    {
        printf("You get 12000 points\n");
    }
    else if(n%6==0&&n%8==0)
    {
        printf("You get 14000 points\n");
    }
    else if(n%4==0&&n%6==0)
    {
        printf("You get 1000 points\n");
    }
    else if(n%4==0)
    {
        printf("You get 400 points\n");
    }
    else if(n%6==0)
    {
        printf("You get 600 points\n");
    }
    else
    {
        printf("You get o points\n");
    }

}
