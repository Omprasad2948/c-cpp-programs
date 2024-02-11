#include<stdio.h>
#include<conio.h>
int main(){
	
char ch;
printf("Enter the Alphabet :\n");
scanf("%c",&ch);
if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
	printf("The alphabet is vowel !");
}
else{
	printf("The Alphabet is Consonant !");
}

 return 0;
}
