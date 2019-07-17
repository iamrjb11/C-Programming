/**
@author : RK Rajib Khan
**/
/* C++ program to reverse a string using recursion 
input : abcde
output : edcba
*/
#include<stdio.h>
#include<string.h>
char st[100];
int len=0;
 char * str_reverse(char a[]){
    //puts(a);
    if(a[0]!='\0'){
        int le =strlen(a);
        le=le-1;
        st[len]=a[le]; len++;
        a[le]='\0';
        str_reverse(a);
        
    }
    else{
        st[len]='\0';
        return st;
    }
}

int main()
{
    char a[100] = {"abcde"};
    char *pt;
    pt=str_reverse(a);
    for(int i=0;pt[i]!='\0';i++){
        printf("%c",*(pt+i));
    }
    
    return 0;
}
