#include<stdio.h>
#include<conio.h>
int main(){
	
	int a,b,*ptr1,*ptr2;
	float div;
	printf("Enter the first number :\n");
	scanf("%d",&a);
	
	printf("Enter the second number :\n");
	scanf("%d",&b);
	
	ptr1=&a;
	ptr2=&b;
	
	if(*ptr1>*ptr2){
		printf("The greater is %d",*ptr1);
	}
	else{
			printf("The greater is %d",*ptr2);
	}
	
	
	
	
	return 0;
}
