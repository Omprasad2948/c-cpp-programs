#include<stdio.h>
#include<conio.h>
int main(){
	
	printf("Calculate the earthquake waves !\n");
	int angle;
	printf("Enter the angle of shadow with zero waves :\n");
	scanf("%d",&angle);
	if(angle>103 && angle<=142){
		printf("primary waves !");
	}
	else if((angle>0 && angle<103 )|| ( angle>142 && angle<=180)){
		printf("Secondary waves");
	}
	else
	{
		printf("Surface waves.");
		}	
	
	return 0;
}
