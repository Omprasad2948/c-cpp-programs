#include<stdio.h>
#include<conio.h>
int main(){
	float height;
	printf("Enter the height in centimeter :\n");
	scanf("%f",&height);
	if(height<150){
		
		printf("The person is dwarf !\n");
	}
	else if(height>=150 && height <165)
	{
		printf("The person is average heighted !\n");
	}
	else if(height>=165 && height <195)
	{
	printf("The person is taller !\n");	
	}
	return 0;
}
