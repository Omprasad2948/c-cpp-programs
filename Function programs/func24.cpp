#include<stdio.h>

void reverseNum(int n){
	int temp=n;
	int reverse=0;
	while(n!=0){
		reverse=reverse*10+(n%10);
		n/=10;
	}
	if(temp==reverse){
		printf("The number is palindrome.");
	}else{
		printf("The number is not palindrome.");
	}
}

int main(){
	
	int num;
	printf("Enter the number of digit :\n");
	scanf("%d",&num);
	
	reverseNum(num);
	
	return 0;
}
