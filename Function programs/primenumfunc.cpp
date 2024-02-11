#include<stdio.h>
#include<conio.h>
void primenum(int a){
	int count=0;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			count++;
		}
	}
	if(count==2){
		printf("The number is prime number.\n");
	}
	else{
		printf("The number is not prime number.\n");
	}
}
int main(){
	
	
	int num;
	printf("Enter the number to check whether the number is prime or not :\n");
	scanf("%d",&num);
	primenum(num);
	
}
