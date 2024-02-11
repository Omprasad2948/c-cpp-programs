#include<stdio.h>
#include<conio.h>
int main(){
	void add(int,int);// Function Declaration
	
	int a,b;
	printf("Enter the value of A and B :\n");
	scanf("%d %d" ,&a,&b);
	
	 add(a,b);
	
	
	return 0;
}

void add(int a,int b){
	printf("The addition is %d",a+b);
}
