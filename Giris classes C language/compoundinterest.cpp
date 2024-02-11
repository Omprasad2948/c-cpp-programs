#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	
	//Amount= P(1 + R/100)t
	float cp,p,r,t;
	printf("Enter the principal amount :\n");
	scanf("%f",&p);
	
	printf("Enter the rate :\n");
	scanf("%f",&r);
	
	printf("Enter the time :\n");
	scanf("%f",&t);
	
	cp = p*((pow((1 + r / 100),t))); 
	printf("\n The compound intersest is %0.1f",cp);
	return 0;
}
