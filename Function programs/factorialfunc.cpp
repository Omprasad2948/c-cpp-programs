#include<stdio.h>
#include<conio.h>
int main(){
	
	int num;
	printf("Enter the Number:\n");
	scanf("%d",&num);
	
	void factorial(int);
	factorial(num);
	
	
	return 0;
}

void factorial(int num){
	int fact=1;
	for(int i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("The Factorial of %d is %d",num,fact);
}
