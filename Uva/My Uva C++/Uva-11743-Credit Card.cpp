#include<stdio.h>
int main()
{
    char credit_Nmbr[100];
    int T,ch=1;
    scanf("%d",&T);
    while(T--)
    {
        int i;
        if(ch==1) gets(credit_Nmbr);
        gets(credit_Nmbr);
        ch=0;
        int doubl_sum=0,rem,rem2,n;
        for(i=0;credit_Nmbr[i]!='\0';i=i+2)
        {
            if(credit_Nmbr[i]==' ') i++;
            rem=(credit_Nmbr[i]-48)*2;

            if(rem>=10)
            {
                n=rem;
                rem=0;
                for(;;)
                {
                    rem2=n%10;
                    n=n/10;
                    rem=rem+rem2;
                    if(n==0) break;
                }
            }
            doubl_sum=doubl_sum+rem;
        }
        int undoubl_sum=0,c=0;
        for(int i=1,k=1,r=0;r<8;i=i+2,k=k+2,r++)
        {
            if(credit_Nmbr[i-1]==' ')
            {
                k=k+1;
                i=k;
            }
            undoubl_sum=undoubl_sum+(credit_Nmbr[k]-48);
        }
        int total_sum;
        total_sum=doubl_sum+undoubl_sum;
        int total_sum2=total_sum%10;
        if(total_sum%10==0) printf("Valid\n");
        else printf("Invalid\n");
    }
}
