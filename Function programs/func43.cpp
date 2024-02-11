#include<stdio.h>
#include<math.h>

void fibonaciiSeries(int num){
	int num1=0,num2=1,num3;
	printf("%d\t%d\t",num1,num2);
	for(int i=1;i<=num;i++){
		num3=num1+num2;
		printf("%d\t",num3);
		num1=num2;
		num2=num3;
	}
}
int main(){
	printf("Enter the nth number :\n");
	int num;
	scanf("%d",&num);
	fibonaciiSeries(num);
	
	return 0;
}
