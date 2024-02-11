

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	
	int num,sum=0,flag=0,rem;
	printf("Enter the number :\n");
	scanf("%d",&num);
	while(sum!=1 && sum!=4)
	{
	sum=0;		
	while(num>0)
	{
	rem=num%10;
	sum=sum+(rem*rem);
	num=num/10;	
	}
	num=sum;	
}
	if(sum==1)
	{
		printf("Happy number ");
	}
	else
	{
		printf("Not Happy number");
	}
	return 0;
} 
