#include<stdio.h>

void primeNumCheck(int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("The number is prime number.
		\n");
	}
	else{
		printf("The number is not prime number.\n");
	}
}
int main(){
	
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	primeNumCheck(num);
	
	return 0;
}
