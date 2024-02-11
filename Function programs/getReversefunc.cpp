#include<stdio.h>
int getReverse(int n){
	int rem,sum=0;
	while(n!=0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	return sum;
}
int main(){
	
	int num,result;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	result=getReverse(num);
	printf("The number after reverse is %d",result); 
	
	return 0;
}
