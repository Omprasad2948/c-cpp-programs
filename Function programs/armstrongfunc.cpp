#include<stdio.h>
#include<conio.h>
#include<math.h>
void Armstrong(int a){
	int count=0,rem,temp,temp2,sum=0;
	temp=a;
	temp2=a;
	while(temp!=0){
		temp=temp/10;
		count++;
	}
	while(temp2!=0){
		rem=temp2%10;
		sum=sum+pow(rem,count);
		temp2=temp2/10;
	}
	if(sum==a){
		printf("The number is Armstrong number.\n");
	}
	else{
		printf("The number is not Armstrong number.\n");
	}
}
int main(){
	
	
	int num;
	printf("Enter the number to check whether the number is Armstrong or not :\n");
	scanf("%d",&num);
	Armstrong(num);
	
}
