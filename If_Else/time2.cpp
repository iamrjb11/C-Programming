#include<stdio.h>
int main()
{
    int n;
    char x,y;
    printf("Enter a time : ");
    scanf("%d %c%c",&n,&x,&y);
    printf("n=%d x=%c y=%c\n",n,x,y);
    if(n==7&&x=='a'&&y=='m') printf("Get Up\n");
    else if(n==8&&x=='a'&&y=='m') printf("Break Fast\n");
    else if(n==2&&x=='p'&&y=='m') printf("Lunch Time\n");
    else if(n==7&&x=='p'&&y=='m') printf("Stady Time\n");
    else printf("Sleep Time\n");
}
