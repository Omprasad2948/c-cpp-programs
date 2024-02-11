#include<stdio.h>
#include<conio.h>
int main(){
	
	int a,b,c,*ptr1,*ptr2,*ptr3;
	float div;
	printf("Enter the first number :\n");
	scanf("%d",&a);
	
	printf("Enter the second number :\n");
	scanf("%d",&b);
	
	printf("Enter the second number :\n");
	scanf("%d",&c);
	
	ptr1=&a;
	ptr2=&b;
	ptr3=&c;
	if((*ptr1>*ptr2)&&(*ptr1>*ptr3)){
		printf("The greater is %d",*ptr1);
	}
	else if((*ptr2>*ptr1)&&(*ptr2>*ptr3) ){
			printf("The greater is %d",*ptr2);
	}
	else{
		printf("The greater is %d",*ptr3);
	}
	
	
	
	
	return 0;
}
