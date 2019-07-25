#include<stdio.h>
int main(){
	int n1,n2,i;
	while(scanf("%d %d",&n1,&n2)==2){
		if(n1 < n2){
			int temp=n1;
			n1=n2;
			n2=temp;
		}


		for(i=n2; i>1 ; i--){
			if(n1%i==0 && n2%i==0){
				break;
			}
		}
		printf("Greatest common divisor/factor/(GCD)/(GCF)/(HCF) : %d\n",i);
	}
}