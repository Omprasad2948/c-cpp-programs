#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,rem,flag=0,n;
	printf("Enter the number :\n");
	scanf("%d",&num);
	printf("Input search digit :\n");
	scanf("%d",&n);
	while(num>0){
		rem=num%10;
		if(rem==n){
			flag=1;
			break;
		}	
		num=num/10;
		
	}
	if(flag==1)
	{
		printf("digit found in number\n");
	}
	else
	{
		printf("digit not found in number\n");
	}
	
	return 0;
}
