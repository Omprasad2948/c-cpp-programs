#include<stdio.h>

int main(){
	
	float farh,cel;
	printf("\n Enter the temperature in farhenhit : ");
	scanf("%f",&farh);
	
	cel=(farh-32)*5/9;
	
	printf("\n The temperature in the celcius is :%f ",cel);
	
	return 0;
}
