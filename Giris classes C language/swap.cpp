#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	// swap the first and last number 
	int num,first, last, sum=0,rem,count=0,p;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	first=num%10;
	printf("%d\n",first);
	int temp=num;
	while(num!=0){
		count++;
		num=num/10;
	}
	count=count-1;
	p=pow(10,count);
	last=temp/p;
	printf("%d\n",last);
	temp=temp%p;
	temp=temp/10;
	sum=first*p+temp*10+last;
	printf("The number after reverse is %d\n",sum);
	
	return 0;
}

