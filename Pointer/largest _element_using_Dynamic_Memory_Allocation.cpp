#include<stdio.h>
#include <stdlib.h>
int main(){
	int n,*ptr;
	printf("Enter number of element : ");
	scanf("%d",&n);
	ptr = (int*)calloc(n,sizeof(int)); // Memory is allocated for 'n' elements

	for(int i=0;i<n;i++){
		scanf("%d",ptr+i);
	}

	printf("Data : ");
	for(int i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
	int largeValue=*ptr;
	for(int i=1;i<n;i++){
		if(largeValue < *(ptr+i))
			largeValue = *(ptr+i);
	}
	printf("\nLargest Element : %d\n",largeValue );




}