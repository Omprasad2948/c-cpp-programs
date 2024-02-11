#include<stdio.h>
#include<conio.h>
int main(){
	
	//check whether the number is strong number or not
	
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	int num1=num;
	
	int sum=0,fact,rem;
	while(num>0){
	rem=num%10;
	fact=1;	
	for(int i=1;i<=rem;i++){
		fact=fact*i;
		
	}
	sum=sum+fact;
	
	num=num/10;
}
	if(num1==sum){
		printf("Strong Number\n");
	}
	else
	{
		printf("Not Strong Number\n");
	}
	return 0;
}
