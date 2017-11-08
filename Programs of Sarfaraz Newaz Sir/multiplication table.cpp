//150217//
#include <stdio.h>
int main()
{
    printf("Enter two numbers\n");
    int n,t,i;
    scanf("%d %d", &n,&t);
    for(i=1;i<=t;i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;



}
