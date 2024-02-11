#include<stdio.h>
char c='a';
 void alphabetPrint(char ch){
 	if(c<=ch){
 		printf("%c\t",c);
 		c++;
 		alphabetPrint(ch);
	 }
 }
int main(){
	
	alphabetPrint('z');
}
