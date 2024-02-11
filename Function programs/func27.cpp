#include<stdio.h>

void asciiValue(){
	int a=0;
	while(a<=255){
		printf("%d = %c\n",a,a);
		a++;
	}
}

int main(){
	
	asciiValue();
	
	return 0;
}
