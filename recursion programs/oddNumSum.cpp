#include<stdio.h>
   int i=1;
   int sum=0;
   void oddNumSum(int num){
   	if(i<=num){
   		if(i%2!=0){
   			sum=sum+i;
		   }
   		i++;
   		oddNumSum(num);
	   }
	else{
		printf("\nThe sum is %d",sum);
	}
   }
int main(){
	
	int num;
	printf("Enter the nth number :\n");
	scanf("%d",&num);
	
	oddNumSum(num);
	return 0;
}
