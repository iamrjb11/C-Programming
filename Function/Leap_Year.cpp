/**
2000 = leap year
2016 = leap year
*/




#include<stdio.h>
int leap(int year)
{
    int ch;
    if(year%400==0) ch=1;
    else if(year%4==0&&year%100!=0) ch=1;
    else ch=0;
    return ch;
}
int main()
{
    int year;
    printf("Enter a Year : ");
    scanf("%d",&year);
    if(leap(year)==1) printf("%d is a Leap Year\n",year);
    else printf("%d is not a Leap Year\n",year);
}
