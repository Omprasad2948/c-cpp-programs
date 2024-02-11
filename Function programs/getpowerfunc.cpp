#include<stdio.h>

int getPower(int base,int power){
	int p=1;
	for(int i=1;i<=power;i++){
		p=p*base;
	}
	return p;
}

int main(){
	
	int base,power,result;
	printf("Enter the base :\n");
	scanf("%d",&base);
	printf("Enter the power :\n");
	scanf("%d",&power);
	
	result=getPower(base,power);
	printf("The power is %d",result);
	
	return 0;
}
