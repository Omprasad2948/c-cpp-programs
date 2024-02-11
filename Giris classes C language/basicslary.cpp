#include<stdio.h>
#include<conio.h>
int main(){
	
	float basic_salary,da,hra;
	
	printf("Enter the basic salary of employee :\n");
	scanf("%f",&basic_salary);
	
	if(basic_salary<=10000){
		
	da=(basic_salary*20)/100;
	printf("The Employee DA is %f \n",da);
	
	hra =(basic_salary*80)/100;
	printf("The Employee HRA ia %f \n ",hra);
		
	}
	else if(basic_salary<=20000){
		
	da=(basic_salary*25)/100;
	printf("The Employee DA is %f \n",da);
	
	hra =(basic_salary*90)/100;
	printf("The Employee HRA ia %f \n ",hra);
		
	}
	else if(basic_salary>20000){
		
	da=(basic_salary*30)/100;
	printf("The Employee DA is %f \n",da);
	
	hra =(basic_salary*95)/100;
	printf("The Employee HRA ia %f \n ",hra);
		
	}

	
	return 0;
}
