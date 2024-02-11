#include<stdio.h>

int main(){
	
	char a='a',*ptr;
	ptr=&a;
	while(a<='z'){
		printf("%c\t",*ptr);
		a++;
	}
	
	
	return 0;
}
