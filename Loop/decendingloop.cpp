#include<stdio.h>
int main()
{
    float a,b,c,x,y,z;
    printf("Input The Numbers:a:b:c:");
    scanf("%f%f%f\n",&x,&y,&z);
    for(a=x;a>1;a++){
        for(b=y;a!=b;b++){
            for(c=z;c!=b&&c!=a;c++){
                printf("\n%f\n%f\n%f\n",x,y,z);
                }
        }
    }
    for(a=x;;){
        for(b=y;a==b;){
            for(c=z;c!=b&&c!=a;){
                printf("\n%f\n%f\n",x,z);
                }
        }
    }
    for(a=x;;){
        for(b=x;a!=b;){
            for(c=z;(c==b&&c!=a)||(c!=b&&c==a);){
                printf("\n%f\n%f\n",x,y);
                }
        }
    }
    printf("Input Error!\n");
    return 0;
}

