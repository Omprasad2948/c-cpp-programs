#include<stdio.h>
int sum=0;
int strongnum(int a){
	if(a!=0){
		int rem=a%10,fact=1;
		for(int i=1;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		strongnum(a/10);
	}
	return sum;
}
int main(){
	int a,result;
	printf("Enter the number to check whether the number is strong or not :\n");
	scanf("%d",&a);
	
	result=strongnum(a);
	if(result==a){
		printf("The number is strong number\n");
	}
	else{
		printf("The number is not strong number\n");
	}
	
	
	return 0;
}
