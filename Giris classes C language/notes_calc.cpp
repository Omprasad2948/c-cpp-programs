#include<stdio.h>
#include<conio.h>
int main(){
	
	int amount;
	int n1=500,n2=200,n3=100,n4=50,n5=20,n6=10;
	printf("Enter the amount : \n");
	scanf("%d",&amount);
	int notes=0;
	
	while(amount>10){
		
		if(amount>=500){
		notes=notes+(amount/500);
		amount=amount%500;	
		}
		else if(amount>=200 && amount<500){
			notes=notes+(amount/200);
			amount=amount%200;
		}
		else if(amount>=100 && amount<200){
			notes=notes+(amount/100);
			amount=amount%100;
		}
		else if(amount>=50 && amount<100){
			notes=notes+(amount/50);
			amount=amount%50;
		}
		else if(amount>=20 && amount<50){
			notes=notes+(amount/20);
			amount=amount%20;
		}
		else if(amount>=10 && amount<20){
			notes=notes+(amount/10);
			amount=amount%10;
		}
		
				
	}
	printf("The total notes are %d\n",notes);
	printf("The remaining amount is %d\n",amount%10);
	
	
	
	
	
	
	return 0;
}
