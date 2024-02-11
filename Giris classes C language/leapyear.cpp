#include<stdio.h>
#include<conio.h>
int main(){
	
	// write a program to check the year is leap or no
	int year;
	printf("Enter the number of the year :\n");
	scanf("%d",&year);
	
	((year%4==0) &&(year%100!=0))? printf("The year is the leap year !"):(year%400==0)? printf("The year is the leap year !"):
		printf("The year is the not leap year !");
	
	
	
	return 0;
}
