#include<stdio.h>
#include<conio.h>
int main(){
	void area(float);// Function Declaration
	
	float a;
	printf("Enter the value of radius to print area:\n");
	scanf("%f" ,&a);
	
	 area(a);
	
	
	return 0;
}

void area(float a){
	printf("\nArea of circle is %f",a*a*3.14f);
}
