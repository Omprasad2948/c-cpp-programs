#include<stdio.h>

void Alphabet(){
  char ch='a';
  while(ch!='{'){
  	printf("%c\t",ch);
  	ch++;
  }
  printf("\n\n");
  int a=97;
  while(a<=122){
  	printf("%c\t",a++);
  }
}
int main(){
	
	
	Alphabet();

	
	return 0;
}
