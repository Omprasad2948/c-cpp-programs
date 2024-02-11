#include<stdio.h>

int main(){
	
	int num1,num2;
	printf("Enter the first number :\n");
	scanf("%d",&num1);
	
	printf("Enter the second number :\n");
	scanf("%d",&num2);
	
	void findsum(int ,int );
	
	findsum(num1,num2);
	
	return 0;
}

void findsum(int a,int b){
	printf("The sum of number is %d",a+b);
}
