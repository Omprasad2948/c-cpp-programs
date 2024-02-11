#include<stdio.h>
#include<conio.h>
int main(){
	int weight;
	printf("Entr the weight of clothes :\n");
	scanf("%d",&weight);
	
	if(weight==0){
		printf("The time estimated is 0m");	
	}
	
	else if(weight>0 && weight<=2000){
		printf("The time estimated is 25m");
	}
	
	else if(weight>2000 && weight<=4000){
		printf("The time estimated is 35m");
	}
	
	else if(weight>4000 && weight<=7000){
		printf("The time estimated is 45m");
	}
	
	else if(weight>7000){
		printf("Machine Overloaded");
	}
	
	else{
		printf("Invalid Input");
	}
	
	
	
	
	return 0;
}
