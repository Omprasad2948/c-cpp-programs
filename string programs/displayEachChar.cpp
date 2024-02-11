//Display Each character seperately on te string

#include<stdio.h>
#include<string.h>

int main(){
	
	char ch[10];
	printf("Enter the string :\n");
	gets(ch);
	int i=0;
	for(i=0;ch[i]!='\0';i++){
		printf("%c\n",ch[i]);
	}
}
