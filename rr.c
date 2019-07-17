
#include<stdio.h>
int main(){
    int a[20];
    int count=3,i;
    for(i = 0; i < count; ++i)
    {
        scanf("%d",&a[i]);
    }
    int *p;
    p=a; //point the first value of array;
    for(i = 0; i < count; ++i)
    {
        printf("%d ",*p );
        p++;
    }
}