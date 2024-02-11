#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	//check whether the number is armstrong or not
	int rem,sum=0,temp;
	temp=num;
	while(num>0){
		
		rem=num%10;
		sum=(sum*10)+rem;
		num=num/10;	
		
	}
	
	if(sum==temp){
		printf("The number is palindrome ");
		
	}
   else 
   {
   	printf("The number is not palindrome ");
   }

	
	return 0;
}
