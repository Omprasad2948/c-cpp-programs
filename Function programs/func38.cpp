#include<stdio.h>
#include<math.h>

void armstrong(int num){
	for(int i=1;i<=num;i++){
		int temp=i,count=0,sum=0,rem;
	while(temp!=0){
		count++;
		temp=temp/10;
	}
	temp=i;
	while(temp!=0){
		rem=temp%10;
		sum=sum+pow(rem,count);
		temp=temp/10;
	}
	if(sum==i){
		printf("%d\t",i);
	}
	
	}
	
}
int main(){
	printf("Enter the nth number :\n");
	int num;
	scanf("%d",&num);
	armstrong(num);
	
	return 0;
}
