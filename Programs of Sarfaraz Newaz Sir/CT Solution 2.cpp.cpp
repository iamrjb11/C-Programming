//Fibonacci Series//
#include <stdio.h>
int main()
{
  int count, n, t1=0, t2=1, i=0;
  printf("Enter number of terms: ");
  scanf("%d",&n);
  printf("Fibonacci Series: %d ",t2);
  count=2;
  while (count<=n)
  {
      i=t1+t2;
      t1=t2;
      t2=i;
      count++;
      printf("%d ",i);
  }
  return 0;
}

