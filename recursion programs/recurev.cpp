#include<stdio.h>
int sum=0;
void table(int n){
	if(n!=0){
	 int rem=n%10;
	 sum=sum*10+rem;
	 table(n/10);
	 	
	}
	else{
		printf("The reverse number is %d\n",sum);
	}
			
	
}

int main(){
	int num;
	printf("Enter the number to print the table :\n");
	scanf("%d",&num);
	table(num);
}
