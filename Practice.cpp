#include<stdio.h>
int main()
{
    char st[50][10];
    char name[4][10]={"Zero","One","Two","Three"};
    int i,j;
    printf("Enter : ");
    gets(st);
    //printf("Enter : ");
    /**for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%c",name[i][j]);
        }
    }**/
    for(i=0;;i++)
    {
        if(st[i][10]==NULL) break;
        st[i][10]=name[st[i]][10];
        /**else
        {
            for(j=0;;j++)
            {
                if(st[i]==j)
                {
                    st[i]=name[j][10];
                    break;
                }
            }
        }**/
        printf("%s ",st[i]);
    }

}
