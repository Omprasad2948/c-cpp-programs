#include<stdio.h>
#include<conio.h>
int main(){
	
	int yos,salary,eps;
	printf("Enter the year of service :\n");
	scanf("%d",&yos);
	
	printf("Enter the salary of an employee:\n");
	scanf("%d",&salary);
	
	printf("Enter the Employee performance score :\n");
	scanf("%d",&eps);
	
	if(yos>2 && salary>20000 && eps>75){
		printf("The employee is permanant !");
	}
	else
	{
		printf("The employee is temporary");
	}
	
	
	
	return 0;
}
