#include<stdio.h>
#include<conio.h>
int main(){
	
int year;
printf("Enter the year :\n");
scanf("%d",&year);
if(year%4==0&&(year%100!=0||year%400==0)){
	printf("The year is leap year !");
}
else{
	printf("The year is not leap year !");
}

 return 0;
}
