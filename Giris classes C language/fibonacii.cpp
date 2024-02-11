#include<stdio.h>
#include<conio.h>
int main(){
	int num1=0,num2=1,num3,n,m;
	printf("Enter the nth number :\n");
	scanf("%d",&m);
	printf("%d %d ",num1,num2);
	for(n=3;n<=m;n++){
		num3=num1+num2;
		printf("%d ",num3);
		num1=num2;
		num2=num3;
		
	}
	
	
	return 0;
}
