#include<stdio.h>
#include<conio.h>
int main(){
	// find the profit and loss
	int cp,sp,c;
	printf("Enter the cost price : \n");
	scanf("%d",&cp);
	
	printf("Enter the selling price : \n");
	scanf("%d",&sp);
	
	c=sp-cp;
	if(c>0){
		printf("congratulation you are in profit");
	}
	else
	{
		printf("You are in the loss ");
	}
	
	
	
	
	
	return 0;
}
