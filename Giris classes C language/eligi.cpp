#include<stdio.h>
#include<conio.h>
int main(){
	
	int age;
	printf("Enter the age :\n");
	scanf("%d",&age);
	
	if(age<=55){
		if(age>=18){
			printf("You are eligible for this job \n");
		}
		else
		{
			printf("You are not eligible for this job\n");
		}
		
	}
	else{
		printf("You are not eligible for this job");
	}
	

	
	
	return 0;
}
