#include<stdio.h>
#include<conio.h>
int main(){
	
	int a,b,c,*ptr1,*ptr2,*ptr3,temp;
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
	printf("Value before Swapping :\n");
	printf("Value 1 :%d\n",*ptr1);
	printf("Value 2 :%d\n",*ptr2);
	printf("Value 3 :%d\n\n",*ptr3);
	temp=*ptr1;
	*ptr1=*ptr3;
	*ptr3=*ptr2;
	*ptr2=temp;
	printf("Value After Swapping :\n");
	printf("Value 1 :%d\n",*ptr1);
	printf("Value 2 :%d\n",*ptr2);
	printf("Value 3 :%d\n",*ptr3);
	
	
	
	
	return 0;
}
