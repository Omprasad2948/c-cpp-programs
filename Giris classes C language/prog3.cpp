#include<stdio.h>
#include<conio.h>
int main(){
	//find whether the number is divisible by 5 or 11
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	
	if(num%5==0){
		printf("The number is divisible by 5");
	}
	else if(num%11==0){
		printf("The number is divisible by 11");
	}else if(num%5==0 &&num%11==0){
		printf("The number id divided by both 5 and 11");
	}else{
		printf("The number is not divided by 5 and 11");
	}
	
	return 0;
}
