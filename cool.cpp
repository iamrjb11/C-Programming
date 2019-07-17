#include <stdio.h>
#include <string.h>

 int main(){
    char n[20];
    n="rajib ";
    printf("%s\n",n );

    union books
    {
        int id;
        char name[20];
        int size;

    };
    union books b1;
    union books b2;


    b1.name = "JAVA 12364566358741";
    b1.id=102;


    b2.name = "C Prog";
    b2.id = 204;




    printf("Name : %s\tID : %d\n",b1.name,b1.id);
    printf("Name : %s\tID : %d\n",b2.name,b2.id);

 }
