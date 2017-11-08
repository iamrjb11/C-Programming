#include<stdio.h>
int main()
{
    char r;
    printf("Input a charecter:");
    scanf("%c",&r);
    if(r=='A'||r=='a'||r=='E'||r=='e'||r=='I'||r=='i'||r=='O'||r=='o'||r=='U'||r=='u')
    {
        printf("%c is a vowle\n",r);
    }
    else
    {
        printf("a constant\n");
    }
}
