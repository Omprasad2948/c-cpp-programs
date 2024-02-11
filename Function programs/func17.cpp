#include<stdio.h>


int main(){
	
	int num;
	printf("Enter the number to count the digit :\n");
	scanf("%d",&num);
	
	int digitCount(int);
	
	int result=digitCount(num);
	
	printf("The number has %d digit. ",result);
	
	
	return 0;
}

int digitCount(int n){
	int count=0;
	
	while(n!=0){
		count++;
		n/=10;
	}
	
	return count;
}
