#include<stdio.h>

int main(){
	
	int num;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	void noreverse(int);
	
	noreverse(num);
	
	return 0;
}

void noreverse(int a){
	int result=0,rem;
	while(a!=0){
		rem=a%10;
		result=result*10+rem;
		a=a/10;
	}
	printf("The reverse of number is %d",result);
}
