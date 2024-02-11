#include<stdio.h>
#include<string.h>
int main(){
	
	int i,len;
	char ch1[20],ch2[20];
	printf("Enter the first string:\n");
	gets(ch1);
	printf("Enter the string:\n");
	gets(ch2);
	len=strlen(ch1);
	for(i=0;ch2[i]!='\0';i++){
		ch1[len]=ch2[i];
		len++;
	}
	ch1[len]='\0';
	printf("The concated string is %s",ch1);
	
	return 0;
}
