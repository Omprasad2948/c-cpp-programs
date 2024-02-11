#include<stdio.h>

void reverseNum(int n){
	int reverse=0;
	while(n!=0){
		reverse=reverse*10+(n%10);
		n/=10;
	}
	printf("The number after Reverse is : %d",reverse);
}

int main(){
	
	int num;
	printf("Enter the number of digit :\n");
	scanf("%d",&num);
	
	reverseNum(num);
	
	return 0;
}
