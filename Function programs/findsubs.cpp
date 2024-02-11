#include<stdio.h>

int main(){
	
	int num1,num2;
	printf("Enter the first number :\n");
	scanf("%d",&num1);
	
	printf("Enter the second number :\n");
	scanf("%d",&num2);
	
	void findsub(int ,int );
	
	findsub(num1,num2);
	
	return 0;
}

void findsub(int a,int b){
	printf("The substaction of number is %d",a-b);
}
