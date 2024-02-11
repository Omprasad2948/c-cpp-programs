#include<stdio.h>

void evennaturalSum(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(i%2==0){
		sum=sum+i;	
		}		
	}
	printf("The sum of all even nth natural number is %d",sum);
}
int main(){
	
	int num;
	printf("Enter the nth number :\n");
	scanf("%d",&num);
	
	evennaturalSum(num);
	
	
	return 0;
}
