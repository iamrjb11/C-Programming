#include <stdio.h>
int main()
{
    int a,i,j,n,number[30];
    printf("Enter N numbers: \n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for(i=0; i<n; i++)
        scanf("%d", &number[i]);
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(number[j]>number[j+1])
            {
                a = number[j];
                number[j]=number[j+1];
                number[j+1]=a;
            }

        }

    }
    printf("Ascending order\n");
    for(i=0; i<n; i++)
        printf("%d\n",number[j]);

}

