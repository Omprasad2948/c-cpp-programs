#include<stdio.h>
#include<conio.h>
int main(){
	int num,first,last,swap;
	printf("The number before swapping :\n");
	scanf("%d",&num);
	last=num%10;
	printf("The last number is %d\n",last);
	first=num/1000;
	printf("The first number is %d\n",first);
	num=num/10;
	num=num%100;
	num=num*10;
	printf("The middle number is %d\n",num);		
	swap=(last*1000)+num+first;
	printf("The number after swappning : %d\n",swap);
	
	
	return 0;
}
