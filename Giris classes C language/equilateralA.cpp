//Area of an equilateral triangle

#include<stdio.h>
#include<conio.h>
int main(){
	
	//Area of an Equilateral Triangle
	//A = (v3/4)a²
	float area,a;
	printf("Enter the lengh of side : ");
	scanf("%f",&a);
	
	area=(1.73*a*a)/4;
	printf("%f",area);
	
	
	return 0;
}
