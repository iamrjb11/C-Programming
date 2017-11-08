 /// Amount - Give Taka
 /**
 Input      10 14  26 20
 Output     10 91 195 20
 **/

#include<stdio.h>
int main()
{
    long long int amount,output;
    while(scanf("%lld",&amount)&&amount<10000)
    {
        if(amount%7==0)
        {
            output=amount+77;
        }
        else if(amount%11==0)
        {
            output=amount+121;
        }
        else if(amount%13==0)
        {
            output=amount+169;
        }
        else
        {
            output=amount;
        }
        printf("%lld\n",output);
    }
    return 0;
}
