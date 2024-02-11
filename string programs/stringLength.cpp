#include<stdio.h>
#include<string.h>


int main(){
	
	char ch[50];
	int i=0,count=0;
	printf("Enter the string to count the length :\n");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++){
		count++;
	}
	printf("\nThe length  of string is %d",count);
	
	return 0;
}
