save kora hoy nahhhhhhh
#include<stdio.h>
int main()
{
    int N,i,a[1000];
    while(scanf("%d",&N)&&(N>=1&&N<=255))
    {
        while(N--)
        {
            int black=0;
            for(i=0;i<5;i++)
            {
                scanf("%d",&a[i]);
                if(a[i]<=127) black++;
            }
            int min=a[0];
            for(i=1;i<5;i++)
            {
                if(min>a[i]) min=a[i];
            }
            /// For Check
            int brk=0,check;
            for(i=0;i<5;i++)
            {
                if(min==a[i])
                {
                    check=i;
                    brk=brk+1;
                    if(brk==2)
                    {
                        check=5;
                        break;
                    }

                }
            }
            if(black==1)
            {

                if(check==0) printf("A\n");
                else if(check==1) printf("B\n");
                else if(check==2) printf("C\n");
                else if(check==3) printf("D\n");
                else if(check==4) printf("E\n");
            }
            else printf("*\n");
        }
    }
}
