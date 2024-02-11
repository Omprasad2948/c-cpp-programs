#include<stdio.h>
   int count=0;
   void digitCount(int num){
   	if(num!=0){
   		count++;
   		digitCount(num/10);
	   }
	else{
		printf("The number has %d digit",count); 
	}
   }
int main(){
	
	int num;
	printf("Enter the nth number :\n");
	scanf("%d",&num);
	
	digitCount(num);
	return 0;
}
