#include<stdio.h>
#include<conio.h>
int main(){
	
	printf("Welcome to Vishwa super Market\n");
	float bill,dis,tws;
	printf("Enter the bill amount :\n");
	scanf("%f",&bill);
	if(bill<1000){
		dis =(bill*5)/100;
		printf("The total Discount is %0.2f\n",dis);
		tws=bill-dis;
		printf("The Bill After the discount is %0.2f\n",tws);
	}
	else if(bill>=1000 && bill<=2500){
		dis =(bill*6)/100;
		printf("The total Discount is %0.2f\n",dis);
		tws=bill-dis;
		printf("The Bill After the discount is %0.2f\n",tws);
	}
	else if(bill>2500 && bill<=5000){
		dis =(bill*7)/100;
		printf("The total Discount is %0.2f\n",dis);
		tws=bill-dis;
		printf("The Bill After the discount is %0.2f\n",tws);
	}
	else if(bill>5000 && bill<=10000){
		dis =(bill*8)/100;
		printf("The total Discount is %0.2f\n",dis);
		tws=bill-dis;
		printf("The Bill After the discount is %0.2f\n",tws);
	}
	else if(bill>10000){
		dis =(bill*8)/100;
		printf("The total Discount is %0.2f\n",dis);
		tws=bill-dis;
		printf("The Bill After the discount is %0.2f\n",tws);
	}
	
	
	
	return 0;
}
