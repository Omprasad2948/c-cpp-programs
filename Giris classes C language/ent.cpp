#include<stdio.h>
#include<conio.h>
int main(){
int cent,met,km;
	
printf("Enter the distancein the centimeter : ");
scanf("%d", &cent);

met = cent/100;
km = cent/1000;

printf("\nThe distance in the meter is : %d",met);

printf("\nThe length in the kilometer is : %d",km);



return 0;
}
