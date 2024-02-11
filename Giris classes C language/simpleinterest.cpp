#include<stdio.h>
#include<conio.h>
int main(){
	
	float si,p,r,t;
	printf("Enter the principal price : \n");
	scanf("%f",&p);
	
	printf("Enter the rate price : \n");
	scanf("%f",&r);
	
	printf("Enter the time period : \n");
	scanf("%f",&t);
	
	si =((p*r*t)/100);
	printf("The Simple interest is %0.2f ",si);
	
	return 0;
}
