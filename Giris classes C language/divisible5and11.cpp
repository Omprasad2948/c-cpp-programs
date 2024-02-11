#include<stdio.h>
#include<conio.h>
int main(){
	
int num;
printf("Enter the number :\n");
scanf("%d",&num);
if(num%5==0&num%11==0){
	printf("The number is divisible by 5 and 11 !\n");
}
else{
	printf("The number is not divisible by 5 and 11 !\n");
}



 return 0;
}
