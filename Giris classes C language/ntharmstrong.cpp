#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int num1,num,temp,sum,rem,nth;
	printf("Enter the number:\n");
	scanf("%d",&nth);
	for(int i=0;i<=nth;i++){
	num1=i;
	num=num1;
	temp=num;
	int count=0;
	sum=0;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	while(num!=0){
		rem=num%10;
		sum=sum+pow(rem,count);
		num=num/10;
	}
	if(num1==sum){
		printf("%d\t",num1);
	}
//	else
//	{
//		printf("Not Armstrong");
//	}
}
}
