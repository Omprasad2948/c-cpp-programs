#include<stdio.h>
#include<conio.h>
int main(){
	void table(int);// Function Declaration
	
	int a;
	printf("Enter the value of to print table:\n");
	scanf("%d" ,&a);
	
	 table(a);
	
	
	return 0;
}

void table(int a){
	for(int i=1;i<=10;i++){
		printf("\n%d * %d =%d",a,i,a*i);
	}
}
