#include<stdio.h>
#include<conio.h>
int main(){
	// bonus calculate
	float salary,bonus;
	printf("Enter the salary of employee : ");
	scanf("%f",&salary);
	(salary<10000)?printf("\nThe diwali bonus of employee is %0.2f\n",(salary*10)/100):
	(salary>=10000 && salary<=30000)?printf("The diwali bonus of employee is %0.2f\n",(salary*7)/100):
	(salary>30000)?printf("The diwali bonus of employee is %0.2f\n",(salary*5)/100):printf("The invalid salary returned !");
	
	
	return 0;
}
