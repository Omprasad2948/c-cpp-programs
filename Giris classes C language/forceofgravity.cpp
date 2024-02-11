#include<stdio.h>
#include<conio.h>
int main(){
	// write a program to calculate force of gravity
	
	// for calculate the force of gravity we need mass and gravitational constant 
	// where the gravitational constant is already given that is 9.8m/s^2
	
	float mass,fog;
	printf("Enter the mass of object:\n");
	scanf("%f",&mass);
	float g=9.8;
	
	fog = mass*g;
	
	printf("The force of gravity is : %f",fog);
	
	
	
	
	
	
	
	return 0;
}
