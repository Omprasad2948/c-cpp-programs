#include<stdio.h>
#include<conio.h>
int main(){
	
	float phy,chem,bio,math,comp,total_marks,perc;
	printf("Enter the marks of physics :\n ");
	scanf("%f",&phy);
	
	printf("Enter the marks of chemistry :\n ");
	scanf("%f",&chem);
	
	printf("Enter the marks of Biology :\n ");
	scanf("%f",&bio);
	
	printf("Enter the marks of Mathematics :\n");
	scanf("%f",&math);
	
	printf("Enter the marks of comp :\n ");
	scanf("%f",&comp);
	
	total_marks = phy+chem+bio+math+comp;
	printf("The total marks is %0.2f\n",total_marks);
	
	perc=(total_marks*100)/500;
	printf("You are percentage is %0.2f\n",perc);
	
	if(perc>=90)
	{
		printf("Grade A\n");
	}
	else if(perc>=80)
	{
		printf("Grade B\n");
	}
	else if(perc>=70)
	{
		printf("Grade C\n");	
	}
	else if(perc>=60)
	{
		printf("Grade D\n");	
	}
	else if(perc>=40)
	{
		printf("Grade E\n");	
	}
	else if(perc<40)
	{
		printf("Grade F\n");	
	}
	return 0;
}
