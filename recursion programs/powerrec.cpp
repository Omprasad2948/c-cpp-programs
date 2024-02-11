#include<stdio.h>
int p=1;
void power(int b,int  i){
	if(i!=0){
		p=p*b;
		power(b,--i);
	}
	else{
		printf("The power is %d",p);
	}
}

int main(){
	
	int b,i;
	printf("Enter the base :\n");
	scanf("%d",&b);
	
	printf("Enter the index :\n");
	scanf("%d",&i);
	
	power(b,i);
	
	return 0;
}
