#include<stdio.h>

void digitProd(int n){
	int product=1;
	while(n!=0){
		product*=(n%10);
		n/=10;
	}
	printf("The product of digit is %d",product);
}

int main(){
	
	int num;
	printf("Enter the number of digit :\n");
	scanf("%d",&num);
	
	digitProd(num);
	
	return 0;
}
