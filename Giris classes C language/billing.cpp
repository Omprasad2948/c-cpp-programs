#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	
//	printf("sr no   name_of_food  code   price\n");
//	printf("  1        pizza        p     250 \n");
//	printf("  2     french fries    f      80 \n");
//	printf("  3        Burger       b     110 \n");
//	printf("  4       patties       a      25 \n");
//	printf("  5       sandwich      s      50 \n");
	
	int p=250,f=80,b=110,a=25,s=50,quantity;
	char code;
	printf("Chhose the food code to order the food : \n");
	scanf("%c",&code);
	
	printf("Quantity of food is :\n");
	scanf("%d",&quantity);
	
	(code=='p')? printf("The total bill is %d",p*quantity):
	(code=='f')? printf("The total bill is %d",f*quantity):
	(code=='b')? printf("The total bill is %d",b*quantity):
	(code=='a')? printf("The total bill is %d",a*quantity):
	(code=='s')? printf("The total bill is %d",s*quantity):printf("Invalid code");
	 
	
	
	return 0;
}
