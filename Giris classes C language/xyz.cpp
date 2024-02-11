#include<stdio.h>
#include<conio.h>
int main(){
	
	int age;
	printf("Enter the age of employee :\n");
	scanf("%d",&age);
	char ch1,ch2;
	printf("Input gender as M and F\n");
	printf("Gender :\n");

	scanf("%c",&ch1);
		_flushall();
	printf("Input maritial status as m and u\n");
	printf("maritial status :\n");
		_flushall();
	scanf("%c",&ch2);
	if(age>30 && (ch2=='m'||ch2=='u') && ch1=='M'){
		printf("The employee is eligible for insurance");
	}
	else if(age>25 && (ch2=='m'||ch2=='u') && ch1=='F')
	{
		printf("The employee is eligible for insurance ");
	}
	else
	{
	printf("The employee is not eligible for insurance ");	
	}
	
	
	
	return 0;
}
