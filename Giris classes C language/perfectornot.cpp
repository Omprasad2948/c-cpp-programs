#include<stdio.h>
#include<conio.h>
int main(){
	
	int i=1, num,sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	while(i<num){
		if(num%i==0){
			sum=sum+i;
		}
		i++;
	}
	
	printf("sum=%d\n",sum);
	if(sum==num){
		printf("Perfect number \n");
	}
	else{
		printf("Not perfect number \n");
	}
	
	
	
	return 0;
}
