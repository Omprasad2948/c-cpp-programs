#include<stdio.h>
#include<conio.h>
int main(){
	float phy,chem,math,bio,comp,total_marks,perc;
	printf("Enter the marks of phy :\n");
	scanf("%f",&phy);
	
	printf("Enter the marks of chem :\n");
	scanf("%f",&chem);
	
	printf("Enter the marks of bio :\n");
	scanf("%f",&bio);
	
	printf("Enter the marks of math :\n");
	scanf("%f",&math);
	
	printf("Enter the marks of comp :\n");
	scanf("%f",&comp);
	
	total_marks=phy+chem+bio+math+comp;
	printf("The total marks is %0.2f\n",total_marks);
	
	perc=(total_marks*100)/500;
	printf("The total percentage are %0.2f\n\n",perc);
	
	(perc>=90)?printf("Grade A"):
	(perc>=80)?printf("Grade B"):
	(perc>=70)?printf("Grade C"):
	(perc>=60)?printf("Grade D"):
	(perc>=40)?printf("Grade E"):
			(perc<40)?printf("Grade F"):printf("Fail");
	
	return 0;
}
