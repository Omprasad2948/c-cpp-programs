#include<stdio.h>
#include<conio.h>
int main(){
	float num;
	printf("Enter the Unit:\n");
	scanf("%f",&num);
	if(num<=50){
		printf("The total bill is %f\n",num*0.50);
	}
	else if(num>50 && num<=100){
	printf("The total bill is %f\n",num*0.75);
	}
	else if(num>100 && num<=150){
	printf("The total bill is %f\n",num*1.20);
	}
	else if(num>50 && num<=100){
	printf("The total bill is %f\n",num*.50);
	}
	else
	{
		printf("Invalid units");
	}
	
	return 0;
}
