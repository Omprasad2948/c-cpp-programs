
#include<stdio.h>

int main(){
	
	int num;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	void nopalindome(int);
	
	nopalindome(num);
	
	return 0;
}

void nopalindome(int a){
	int result=0,rem,temp;
	temp=a;
	while(temp!=0){
		rem=temp%10;
		result=result*10+rem;
		temp=temp/10;
	}
	if(a==result){
		printf("The number is palindrome .\n");
	}
	else{
		printf("The number is not palindrome .\n");
	}
}
