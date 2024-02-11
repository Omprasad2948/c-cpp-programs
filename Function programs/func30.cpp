#include<stdio.h>
void factorialnum(int num){
	int fact=1;
	for(int i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("The factorial of %d id %d\n",num,fact);
}
int main(){
	
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	factorialnum(num);
	
	
	return 0;
}
