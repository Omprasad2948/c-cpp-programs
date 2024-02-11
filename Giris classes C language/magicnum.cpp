#include<stdio.h>
#include<conio.h>
int main(){
	
	//check whether the number is magic or not
 int  num,digit,sum=0,temp,rem,rev=0;
 printf("Enter the number : ");
 scanf("%d",&num);
 temp=num;
 while(temp>0){
 	rem=temp%10;
 	sum=sum+rem;
 	temp=temp/10;
 }
  printf("The sum of the number is %d ",sum);
 
 temp=sum;
 while(temp>0){
 	rev=rev*10+temp%10;
 	temp=temp/10;	
 }
 printf("\nThe reverse number is %d ",rev);
 
 (sum*rev)==num?printf("\nThe number is magic number"):printf("\nThe number is not magic number");
 
 
 
 
 
	return 0;
}
