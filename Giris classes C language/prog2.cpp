#include<stdio.h>
#include<conio.h>
int main(){
	
	//find the greater number in the three number
int num1 , num2, num3;
	printf("Enter the first number : \n");
	scanf("%d",&num1);
	
	printf("Enter the second number :\n");
	scanf("%d",&num2);
	
	printf("Enter the third number :\n");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3){
		printf("The num1 is greater than num2 and num3");
	}
	
	else if(num2>num1 && num2 >num3){
		printf("The num 2 is greater than num1 and num3");
	}else{
		printf("The num3 is greater than num1 and num2");
	}
	
return 0;	
}
