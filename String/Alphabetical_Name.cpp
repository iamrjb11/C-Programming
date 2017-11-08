/**
Input     STRING
Output    GINRST
**/

#include<stdio.h>
int main()
{
    char alp[100];
    printf("Enter A RockzzZ Name : ");
    scanf("%s",alp);
    int i,j;
    for(i=0;;i++)
    {
        if(alp[i]==NULL) break;
        for(j=i+1;;j++)
        {
            if(alp[j]==NULL) break;
            else if(alp[i]>alp[j])
            {
                char temp=alp[i];
                alp[i]=alp[j];
                alp[j]=temp;
            }
        }
    }
    puts(alp);
}
