#include<stdio.h>
#include<conio.h>
int main(){
	float sub1,sub2,sub3,sub4,sub5,total,percentage;
	
	printf("\nEnter the marks of subject 1 :");
	scanf("%f",&sub1);
	printf("\nEnter the marks of subject 2 :");
	scanf("%f",&sub2);
	printf("\nEnter the marks of subject 3 :");
	scanf("%f",&sub3);
	printf("\nEnter the marks of subject 4 :");
	scanf("%f",&sub4);
	
	printf("\nEnter the marks of subject 5 :");
	scanf("%f",&sub5);
	
	total = sub1+sub2+sub3+sub4+sub5;
	printf("\nThe total marks are %f",total);
	
	percentage = total/5;
	printf("\nThe total percentage are %f:",percentage);
	return 0;
}
