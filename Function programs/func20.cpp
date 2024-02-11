#include<stdio.h>
#include<math.h>
void swapFirstLast(int n){
	int temp=n,first,last,middle,count=0,result;
	while(temp!=0){
		count++;
		temp/=10;
	}
	temp=n;
	while(temp!=0){
		first=temp%10;
		temp/=10;
	}
//	printf("first=%d\n",first);
	temp=n;
	last=temp%10;
//	printf("last=%d\n",last);
	int x=pow(10,count-1);
	middle=temp%x;
	middle/=10;
	//printf("middle=%d",middle);
	
	result=last*x+middle*10+first;
	printf("The number after swap = %d",result);
	
	
}
int main(){
	
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	
    swapFirstLast(num);
	
	return 0;
}
