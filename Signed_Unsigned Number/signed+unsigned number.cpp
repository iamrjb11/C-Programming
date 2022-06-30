/*#include<stdio.h>
int main(){
	unsigned char i;
	signed char j;
	int n;
	while(1){
		printf("1.Unsigned Number\n2.Signed Number\n3.Exit\nAns : ");
		scanf("%d",&n);
		if(n==1){
			printf("unsigned number (char) : ");// Only positive number 0-255
			scanf("%d",&i);
			printf("%d\n", i);
	
		}
		else if(n==2){
			printf("signed number (char) : ");// positive+negative number 0-127
			scanf("%d",&j);
			printf("%d\n", j);
	
		}
		else{
			break;
		}
	}
	
}
*/


#include <stdio.h>
int main()
{
    int a[]={12,2,32,21,345,123};
    int *p;
    p=a+2;//address to address
    printf("%d ",*(p+3));
}