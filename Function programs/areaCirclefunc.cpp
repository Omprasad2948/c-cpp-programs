#include<stdio.h>
int  main(){
	
	float radius;
	printf("Enter the radius of circle :\n");
	scanf("%f",&radius);
	void areacircle(float);//Declaration
	areacircle(radius);//calling
	
	return 0;
}

void areacircle(float n){
	printf("Area of circle is: %f",n*n*3.14f);
}
