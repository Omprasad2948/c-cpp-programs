#include<stdio.h>
#include<stdio.h>
int main(){
	
	// find the character is vowel or consonant
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("The charactr is vowel ");
	}
	else{
		printf("The Character is consonant ");
	}
	
	return 0;
}
