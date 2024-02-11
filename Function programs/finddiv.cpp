#include<stdio.h>

int main(){
	
	float num1,num2;
	printf("Enter the first number :\n");
	scanf("%f",&num1);
	
	printf("Enter the second number :\n");
	scanf("%f",&num2);
	
	void finddiv(float ,float );
	
	finddiv(num1,num2);
	
	return 0;
}

void finddiv(float a,float b){
	printf("The Division of number is %f",a/b);
}
