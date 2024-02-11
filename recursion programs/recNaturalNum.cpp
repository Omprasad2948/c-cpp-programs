#include<stdio.h>
int i=1;
  void recNaturalNum(int num){
 	if(i<=num){
 		printf("%d\t",i);
 		i++;
 		recNaturalNum(num);
	 }
 }
int main(){
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	recNaturalNum(num);
}
