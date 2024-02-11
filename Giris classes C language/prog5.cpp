#include<stdio.h>
#include<conio.h>
int main(){
	// find whether the year is leap or not
	int year;
	printf("Enter the year :");
	scanf("%d",&year);
	if((year%4==0)&&((year%400==0)||(year%100!=0))){
		printf("The year is the leap year !");
	}else{
		printf("The year is not a leap year !");
	}
	
	
	
	return 0;
}
