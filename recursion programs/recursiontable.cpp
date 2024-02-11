#include<stdio.h>
int x=1;
void table(int n){
	if(x<=10){
		printf("%d*%d=%d\n",n,x,n*x);
		++x;
		table(n);
	}
		
}

int main(){
	int num;
	printf("Enter the number to print the table :\n");
	scanf("%d",&num);
	table(num);
}
