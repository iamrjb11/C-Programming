/** Take 4 numbers & Search The Smallest number
Input:    5 6 4 9
Output:   Small=4
Input:    12 87 14 46
Output:   Small=12
*/
#include<stdio.h>
int Small(int a,int b,int c,int d)
{
    int res=a;
    if(res>=b) res=b;
    if(res>=c) res=c;
    if(res>=d) res=d;
    return res;
}
int main()
{
    int a,b,c,d;
    printf("Enter the four numbers : ");
    while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
    {
        printf("The Smallest Number is : %d\n\n",Small(a,b,c,d));
        printf("Enter the four numbers : ");
    }
}
