#include<stdio.h>
int  main(){
	
	float length,breadth;
	printf("Enter the length of rectangle :\n");
	scanf("%f",&length);
	
	printf("Enter the Breadth of rectangle :\n");
	scanf("%f",&breadth);
	
	void areaofrect(float,float);//Declaration
	areaofrect(length,breadth);//calling
	
	return 0;
}

void areaofrect(float m,float n){
	printf("Area of rectangle is: %f",m*n);
}
