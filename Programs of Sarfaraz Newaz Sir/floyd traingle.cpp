#include<stdio.h>
int main()
{
    int n,r,c,a=1;
    scanf("%d",&n);
    printf("\n");
    {
      for(r=1;r<=n;r++)
      {
          for(c=1;c<=r;c++)
          {
              printf("%d ",a);
              a++;
          }
          printf("\n");
      }
    }
}
