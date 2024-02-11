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
	
	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;
	
	printf("The value a after swapning is %d\n",*ptr1);
	printf("The value a after swapning is %d\n",a);
	printf("The value a after swapning is %d\n",*ptr2);
	printf("The value a after swapning is %d\n",b);
	
	
	
	
	return 0;
}
