#include <stdio.h>
int main()
{
    int a,i,j,n,num[100];
    printf("Enter N numbers: \n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for(i=0; i<n; i++)
        scanf("%d", &num[i]);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(num[i]>num[j])
            {
                a = num[i];
                num[i]=num[j];
                num[j] = a;
            }

        }

    }
printf("Ascending order\n");
   for(i=0;i<n;i++)
    printf("%d\n",num[i]);

   int f, l, mid,search;

   printf("\nEnter value to find\n");
   scanf("%d", &search);

   f = 0;
   l = n - 1;
   mid = (f+l)/2;

   while (f <= l) {
      if (num[mid] < search)
         f = mid + 1;
      else if (num[mid] == search) {
         printf("%d found at location %d.\n", search, mid+1);
         break;
      }
      else
         l = mid - 1;

      mid = (f + l)/2;
   }
   if (f > l)
      printf("Not found! %d is not present in the list.\n", search);

   return 0;
}




