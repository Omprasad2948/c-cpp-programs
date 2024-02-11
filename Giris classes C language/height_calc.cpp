#include<stdio.h>
#include<conio.h>
int main(){
	
	float height;
	printf("Enter the height of person : \n");
	scanf("%f",&height);
	
	(height<150.0)?printf("The person is Dwarf \n"):
	(height>=150.0&&height<165.0)?printf("The person Average heighted \n"):	
	(height>160.0&&height<=195.0)?printf("The person is Taller \n"):printf("The invalid height enter");
	
	return 1;
}
