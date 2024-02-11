#include<stdio.h>
void strongNum(int n){
	int temp=n,rem,fact,sum=0;
	while(temp!=0){
		fact=1;
		rem=temp%10;
		for(int i=1;i<=rem;i++){
			fact=fact*i;
		}	
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==n){
		printf("The number is strong number.\n");
	}
	else{
		printf("The number is not strong number.\n");
	}
}
int main(){
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	strongNum(num);
	
	return 0;
}
