#include<stdio.h>
#include<conio.h>
int main(){
	int num,sum=0,mul=1,rem;
	printf("\nEnter the number :");
	scanf("%d",&num);
	int temp=num;
	while(temp>0){
		rem=temp%10;
		sum=sum+rem;
		mul=mul*rem;
		temp=temp/10;
	}
	if(sum==mul){
		printf("Spy number \n");
	}
	else
	{
		printf("Not spy number\n");
	}
	
	return 0;
}
