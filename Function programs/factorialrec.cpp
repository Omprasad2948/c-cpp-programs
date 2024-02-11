#include<stdio.h>
int fact=1;
void factorial(int n){
	if(n!=0){
		fact=fact*n;
		factorial(--n);
	}
	else{
		printf("Factorial is %d",fact);
	}
	
}
int main(){
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	factorial(num);
	
	return 0;
}
