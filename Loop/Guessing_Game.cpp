#include<stdio.h>
int main()
{
    int n=15,i,g;
    for(i=1;i<=10;i++)
    {
        printf("Chance %d : Guess the number : ",i);
        scanf("%d",&g);
        if(g==n)
        {
            printf("Congrates , u ve won in %d tries\n",i);
            break;
        }
        else if(g>n) printf("Ur guess is too big.choose a smaller one\n");
        else printf("Ur guess is too small.choose a bigger one\n");
    }
    printf("Game is Over  \n");
}
