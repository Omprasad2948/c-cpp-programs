#include<stdio.h>
#include<conio.h>
int main(){
	
	int a=100,*ptr;
	ptr=&a;
	printf("The value of a is %d",*ptr);
	printf("\nThe address of a is %d",ptr);
	printf("\nThe address of a is %d",&a);
	printf("\nThe address of pointer is %d",&ptr);
	
	return 0;
}
