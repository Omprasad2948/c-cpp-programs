#include<stdio.h>
#include<math.h>

void armstrong(int num){
	int temp=num,count=0,sum=0,rem;
	while(temp!=0){
		count++;
		temp=temp/10;
	}
	temp=num;
	while(temp!=0){
		rem=temp%10;
		sum=sum+pow(rem,count);
		temp=temp/10;
	}
	if(sum==num){
		printf("The number is armstrong number.\n");
	}
	else{
		printf("The number is not armstrong number.\n");
	}
	
}
int main(){
	printf("Enter the nth number :\n");
	int num;
	scanf("%d",&num);
	armstrong(num);
	
	return 0;
}
