#include<stdio.h>
#include<conio.h>
int main(){
	//find the greater in the two number
	int num1 , num2;
	printf("Enter the first number : \n");
	scanf("%d",&num1);
	
	printf("Enter the second number :\n");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("The num1 is greater than num2\n ");
		
	}else{
		printf("the num2 is greater than num1 ");
	}
	
	
	return 0;
}
