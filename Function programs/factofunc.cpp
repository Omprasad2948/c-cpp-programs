#include<stdio.h>

int main(){
	
	int num;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	void findfact(int);
	
	findfact(num);
	
	return 0;
}

void findfact(int a){
	int fact=1;
	for(int i=1;i<=a;i++){
		fact=fact*i;
	}
	printf("The Factorial of number is %d",fact);
}
