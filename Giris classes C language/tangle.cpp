#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("Enter the measure of the first angle :");
	scanf("%d",&a);
	
	printf("Enter the measure of the second angle :");
	scanf("%d",&b);

	c=180-(a+b);
	
	printf("The third angle is %d ",c);
	
	
	
	
	return 0;
}
