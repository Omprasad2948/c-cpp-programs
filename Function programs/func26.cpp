#include<stdio.h>

void reverseNum(int n){
	printf("%c",n);
}

int main(){
	
	int num;
	printf("Enter the number to print the character :\n");
	scanf("%d",&num);
	
	reverseNum(num);
	
	return 0;
}
