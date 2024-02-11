#include<stdio.h>
#include<conio.h>
int main(){
	
	int n=10,m,k=5;
	printf("Enter the acndies for sold \n");
	scanf("%d",&m);
	if(m>k || m==0){
		printf("The invalid input ");
	}
	else {
		printf("candies sold is %d\n",m);
		printf("The candies Available is %d ",n-m);
	}
	
	
	
	return 0;
}
