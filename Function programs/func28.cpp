#include<stdio.h>
int powerNum(int base,int p){
	int power=1;
	for(int i=1;i<=p;i++){
		power=power*base;
	}
	return power;
}
int main(){
	int base,p;
	printf("Enter the base :\n");
	scanf("%d",&base);
	printf("Enter the p\n");
	scanf("%d",&p);
	int result=powerNum(base,p);
	printf("The power of number is %d\n",result);
	
	
	return 0;
}
