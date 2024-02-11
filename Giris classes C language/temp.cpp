#include<stdio.h>
#include<conio.h>
int main(){
	
	char ch;
	printf("Enter the character :\n");
	scanf("%c",&ch);
	
	(ch>=65 && ch<=90)||(ch>=97 &&ch<=122)?printf("The character is Alphabet"):ch>=48&&ch<=54?printf("The character is digit"):
		printf("The character is special symbol ");
	
	
	return 0;
}

