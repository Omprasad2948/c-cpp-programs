#include<stdio.h>
#include<conio.h>
int main(){
	// Raju restauren has x stoves
	int x,y;
	printf("Enter the stoves in the restaurent :  \n");
	scanf("%d",&x);
	
	//only one packet one packet can be cooked at any minute
	printf("Enter the number of minute :\n");
	scanf("%d",&y);
	
	if(x<100&&y>1){
		printf("maximum number of custumer served is %d",x*y);
	}else{
		printf("you enteres the wrong input");
	}
	
	
	
	return 0;
}
