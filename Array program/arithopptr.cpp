#include<stdio.h>
#include<conio.h>
int main(){
	
	int a,b,*ptr1,*ptr2,sum,sub,mul;
	float div;
	printf("Enter the first number :\n");
	scanf("%d",&a);
	
	printf("Enter the second number :\n");
	scanf("%d",&b);
	
	ptr1=&a;
	ptr2=&b;
	
	sum=(*ptr1)+(*ptr2);
	sub=(*ptr1)-(*ptr2);
	mul=(*ptr1)*(*ptr2);
	div=(*ptr1)/(*ptr2);
	
	printf("The sum of two number is %d\n",sum);
	printf("The substraction of two number is %d\n",sub);
	printf("The multiplication of two number is %d\n",mul);
	printf("The division of two number is %0.2f\n",div);
	
	
	
	return 0;
}
