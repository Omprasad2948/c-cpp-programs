#include<stdio.h>


int main(){
	
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	int sumFirstLast(int);
	int result=sumFirstLast(num);
	printf("sum = %d",result);
	
	return 0;
}

int sumFirstLast(int num){
	int temp=num,first,last;
	while(temp!=0){
		first=temp%10;
		temp=temp/10;		
	}
	printf("The First number is %d\n",first);
	last=num%10;
	printf("The last number is %d\n",last);
	int sum=first+last;
	
	return sum;
}
