#include<stdio.h>

int main(){
	
	float base,height;
	printf("Enter the base of triangle :\n");
	scanf("%f",&base);
	
	printf("Enter the height of triagle :\n");
	scanf("%f",&height);
	
	void areaoftriangle(float ,float);
	
	areaoftriangle(base,height);
	
	return 0;
}

void areaoftriangle(float b,float h){
	printf("The area of triangle is %0.2f:\n",1.0/2*b*h);
}
