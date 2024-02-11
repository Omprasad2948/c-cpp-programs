#include<stdio.h>
   int i=1;
   int sum=0;
   void sumNaturalnum(int num){
   	if(i<=num){
   		sum=sum+i;
   		i++;
   		sumNaturalnum(num);
	   }
	else{
		printf("\nThe sum is %d",sum);
	}
   }
int main(){
	
	int num;
	printf("Enter the nth number :\n");
	scanf("%d",&num);
	
	sumNaturalnum(num);
	return 0;
}
