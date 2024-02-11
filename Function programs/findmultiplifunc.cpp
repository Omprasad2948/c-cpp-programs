#include<stdio.h>

int main(){
	
	int num1,num2;
	printf("Enter the first number :\n");
	scanf("%d",&num1);
	
	printf("Enter the second number :\n");
	scanf("%d",&num2);
	
	void findmul(int ,int );
	
	findmul(num1,num2);
	
	return 0;
}

void findmul(int a,int b){
	printf("The Multiplication of number is %d",a*b);
}
