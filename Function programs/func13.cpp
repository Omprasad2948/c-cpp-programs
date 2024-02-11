#include<stdio.h>

naturalNumSum(){
	int sum=0;
	for(int i=1;i<=100;i++){
		sum=sum+i;
	}
	printf("The sum of natural numbers from 1 to 100 is: %d\n",sum);
}

int main(){
	
	
	naturalNumSum();
}
