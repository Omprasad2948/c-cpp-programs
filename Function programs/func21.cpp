#include<stdio.h>

void digitSum(int n){
	int sum=0;
	while(n!=0){
		sum=sum+(n%10);
		n/=10;
	}
	printf("The sum of digit is %d",sum);
}

int main(){
	
	int num;
	printf("Enter the number of digit :\n");
	scanf("%d",&num);
	
	digitSum(num);
	
	return 0;
}
