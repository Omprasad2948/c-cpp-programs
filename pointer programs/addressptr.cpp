//insertion in array

#include<stdio.h>

int main(){
	
	int a=5,*ptr;
	ptr=&a;
//	int b;
//	scanf("%d",&b);
	printf("The addres of a %d",&a);
	printf("\nThe addres of ptr %d",&ptr);
	printf("\nThe value of a %d",a);
	printf("\nThe value of *ptr %d",*ptr
	);
	
	return 0;
}
