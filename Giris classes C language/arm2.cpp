#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	
	int num,rem,sum=0,count=0;
	printf("Enter the number :\n");
	scanf("%d",&num);
	int temp=num;
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
		printf("The number is armstrong number !\n");
	}
	else
	{
		printf("The number is not armstrong number !\n");
	}
	
	
	
	return 0;
}
