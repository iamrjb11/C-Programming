///* Take 4 Ineger Numbers & Sum

/**
Input     4          // '4' - Test Case ..Koyber Ei Prom. ta Test Korte ChaO ??????
       1 2 3 6      // Number Gulo .....
       3 5 7 12
       3 4 6 21
       4 6 8 1
Output    12     // Sum
          27
          34
          19
**/


#include<stdio.h>
#define n 4
int main()

{
    int ara[n],i,Test_case;
    scanf("%d",&Test_case);
    for(i=1;i<=Test_case;i++)
    {
        int j,num,sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&num);
            sum=sum+num;
        }
        printf("%d\n",sum);
   }
   return 0;
}
