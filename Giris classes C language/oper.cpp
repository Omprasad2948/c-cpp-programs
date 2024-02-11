#include<stdio.h>
#include<conio.h>
int main(){
	
	int a,b,num;
	printf("Enter the first number :");
	scanf("%d",&a);
	
	
	printf("Enter the second number :");
	scanf("%d",&b);
	
   printf("Enter the number for following operation :\n");
   printf("1 :Addition \n");
   printf("2 :Substraction \n");
   printf("3 :Multiplication \n");
   printf("4 :Division \n");
   printf("5 :Reminder \n");
   scanf("%d",&num);
   
   switch(num){
   	
   	case 1:
   		printf("The Addition of number is %d",a+b);
		   break;
		   
	case 2:
		printf("The Substraction of number is %d",a-b);
		   break;
		   
	case 3:
		printf("The Multiplication of number is %d",a*b);
		   break; 
	case 4:
		printf("The Division of number is %d",a/b);
		   break; 
	case 5:
		printf("The Reminder of number is %d",a%b);
		   break;   	
   	default:
   		printf("Invalid operation \n");
   		break;
   }
	
	
	
	return 0;
}
