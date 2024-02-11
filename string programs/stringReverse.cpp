#include<stdio.h>
#include<string.h>

int main(){
	char ch[50];
	printf("Enter the string :\n");
	gets(ch);
	int i=0,count=0;
	
	for(i=0;ch[i]!='\0';i++){
		count++;
	}
	printf("The length of string is %d\n\n\n",count);
	printf("The string after the reverse is:\n");
	for(i=count-1;i>=0;i--){
		printf("%c",ch[i]);
	}
	
	return 0;
}
