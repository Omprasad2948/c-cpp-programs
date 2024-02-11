#include<stdio.h>
#include<conio.h>
int main(){
	
	char ch;
	printf("Enter the Alphabet :\n");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90){
		printf("The Alphabet is in Upper case !");
	}
	else if(ch>=97 && ch<=122){
		printf("The Alphabet is in lower case !");
	}
	else{
		printf("Invalid input !");
	}
	
	return 0;
}
