/**intput  :Rajib
             Khan
             is
             Good
Output     :Rajib Khan is Good
**/

#include<stdio.h>
int main()
{
    char st[100],st1[100],st2[100],st3[100];
    printf("Enter a string 1 : ");
    gets(st);
    int i,j;
    printf("Enter a string 2 : ");
    gets(st1);
    printf("Enter a string 3 : ");
    gets(st2);
    printf("Enter a string 4 : ");
    gets(st3);
    int ch=0;
    for(i=0;;i++)
    {
        if(st[i]==NULL)
        {
            for(j=0;;j++,i++)
            {
                if(st1[j]!=NULL) st[i]=st1[j];
                else
                {
                    for(j=0;;j++,i++)
                    {
                        if(st2[j]!=NULL) st[i]=st2[j];
                        else
                        {
                            for(j=0;;j++,i++)
                            {
                                st[i]=st3[j];
                                if(st3[j]==NULL)
                                {
                                    ch=1;
                                    break;
                                }
                            }
                        }
                        if(ch==1) break;
                    }
                }
                if(ch==1) break;
            }
        }
        if(ch==1) break;
    }
    puts(st);
    //printf("Ch = %d\n",ch);
}
