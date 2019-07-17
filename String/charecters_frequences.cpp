/*
Find frequences of each charecters
Input: Write a sentence : iii aaai b kk

Output:
a  -  3
b  -  1
i  -  4
k  -  2

*/
#include<stdio.h>
int main(){

    int i,j,k,countValue[26]={0};
    char original_text[100],lower_case_text[100];
    printf("Write a sentence : ");
    gets(original_text);

    for(i=0;original_text[i]!='\0';i++){
        if(original_text[i]>='A' && original_text[i]<='Z'){
            lower_case_text[i]=original_text[i]+32;
        }
        else{
            lower_case_text[i]=original_text[i];
        }
    }
    lower_case_text[i]='\0';

    for(i=0;lower_case_text[i]!='\0';i++){
        //printf("%c",lower_case_text[i]);
        if(lower_case_text[i]>='a' && lower_case_text[i]<='z'){
            int v = lower_case_text[i]-97;
            //printf("%c - %d\n",lower_case_text[i],v);
            countValue[v]++;
        }
    }

    for(i=0;i<26;i++){
        if(countValue[i]){
            printf("%c  -  %d\n",(i+97),countValue[i]);
        }
    }
}
