/**
Input 4
      15
      97
      121
      0
Output 2
       3
       No Real Number
       11
       Termineted
**/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,root,check;
    while(scanf("%d",&n)&&n>0)
    {
        root=sqrt(n);
        check=1;
        if(root==2) check=1;
        else
        {
            for(i=2;i<root;i++)
            {
                if(root%i==0) check=0;
            }
        }
    }
    if(check==1) printf("%d\n",i);
    else printf("No Real Number\n");
}

