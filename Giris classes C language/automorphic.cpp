#include<stdio.h>
#include<conio.h>
int main(){
	int num,rem;
	printf("\nEnter the number :");
	scanf("%d",&num);
	int temp=num;
	while(num>0){
		num=num*num;
		rem=num%10;
		break;
	}
	if(temp==rem){
		printf("The number is Automorphic \n");
	}
	else
	{
		printf("The number is not Automorphic \n");
	}
	
	return 0;
}
