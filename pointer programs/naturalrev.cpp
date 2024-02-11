#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,*ptr,n=0;
	printf("Enter the nth number :\n");
	scanf("%d",&i);
      
	ptr=&n;
	printf("The reverse natural number is:\n");
	while(i>=*ptr){
		printf("%d\t",i);
		i--;
	}
	
	return 0;
}
