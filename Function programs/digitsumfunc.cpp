#include<stdio.h>
#include<math.h>

void Digitsum(int a){
	int rem,sum=0;

	while(a!=0){
		rem=a%10;
		sum=sum+rem;
		a=a/10;
	}
	
	printf("The sum is %d",sum);
	
}
int main(){
	
	
	int num;
	printf("Enter the number to calculate sum of digit:\n");
	scanf("%d",&num);
	Digitsum(num);
	
}
