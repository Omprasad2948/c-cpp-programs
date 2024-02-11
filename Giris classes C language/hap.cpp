#include<stdio.h>
int main(){
	
	int n,rem,sum=0,flag=0;
	printf("enter number:");
	scanf("%d",&n);
	

	while(sum!=1 && sum!=4){
		sum=0;
		while(n!=0){
		rem=n%10;
		sum=sum+rem*rem;
		
		if(n==1){
			flag=1;
		}
		n=n/10;
	}
	n=sum;
	}
	if(flag==1){
		printf("Happy number ");
	}
	else{
		printf("not happy numbr");
	}
	
	
	
	
	
	return 0;
}
