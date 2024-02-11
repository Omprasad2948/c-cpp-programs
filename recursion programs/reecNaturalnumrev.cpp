#include<stdio.h>

 void recNaturalNum(int num){
 	if(num!=0){
 		printf("%d\t",num);
 		recNaturalNum(--num);
	 }
 }
int main(){
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	recNaturalNum(num);
}
