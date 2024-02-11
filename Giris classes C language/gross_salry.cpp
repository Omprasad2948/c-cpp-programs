#include<stdio.h>
#include<conio.h>
int main(){
	
	// write a program to calculate gross salary
	//gross_salary = basic salary+DA+HRA
	//Basic salary=no.working days+per day salary
	//DA = 20% basic salary
	//hra =40% basic salary
	
	float basic_salary,no_working_days,da,hra,salary_per_day,gross_salary;
	
	printf("Enter the number of working days :\n");
	scanf("%f",&no_working_days);
	
	printf("Enter the Salary per day :\n");
	scanf("%f",&salary_per_day);
	
	basic_salary=no_working_days*salary_per_day;
	printf("The basic salary is %0.2f\n\n",basic_salary);
	
	da = (basic_salary*20)/100;
	printf("The Dearness Allowance is %0.2f \n\n",da);
	
	hra=(basic_salary*40)/100;
	printf("The House rent Allowance is %0.2f\n\n",hra);
	
	gross_salary = basic_salary+da+hra;
	
	printf("The gross salary is %0.2f\n ",gross_salary);
	
	
	return 0;
}
