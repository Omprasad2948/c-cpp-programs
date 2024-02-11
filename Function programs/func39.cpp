#include<stdio.h>
#include<math.h>

void perfectNum(int num){
	int sum=0;
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum==num){
		printf("The number is perfect Number .\n");
	}else{
		printf("The number is not perfect Number .\n");
	}
	
}
int main(){
	printf("Enter the number :\n");
	int num;
	scanf("%d",&num);
	perfectNum(num);
	
	return 0;
}
