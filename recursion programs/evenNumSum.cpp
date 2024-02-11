#include<stdio.h>
   int i=1;
   int sum=0;
   void evenNumSum(int num){
   	if(i<=num){
   		if(i%2==0){
   			sum=sum+i;
		   }
   		i++;
   		evenNumSum(num);
	   }
	else{
		printf("\nThe sum is %d",sum);
	}
   }
int main(){
	
	int num;
	printf("Enter the nth number :\n");
	scanf("%d",&num);
	
	evenNumSum(num);
	return 0;
}
