#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	printf("Enter the character :\n");
	scanf("%c",&ch);
	if((ch>=65 && ch<=90)  || (ch>=97 && ch<=122))
	{
		printf("This is alphabet !");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("This is the digit !");
	}
	else
	{
		printf("This is special symbol !");
	}
	
	return 0;
}
