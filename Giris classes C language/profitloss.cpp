#include<stdio.h>
#include<conio.h>
int main(){
	
	int cp,sp;
	printf("Enter the cost price :\n");
	scanf("%d",&cp);
	
	printf("Enter the selling price :\n");
	scanf("%d",&sp);
	
	if(sp>cp)
	{
		printf("Congratulation ! you are in %d  profit.",sp-cp);
	}
	else
	{
		printf("You are in %d loss !",cp-sp);	
	}
	
	
	return 0;
}
