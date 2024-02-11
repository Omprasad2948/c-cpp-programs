#include<stdio.h>
#include<string.h>

int main(){
	int len;
	char ch[20] ,ch1[20];
	printf("Enter the string :\n");
	gets(ch);
	len=strlen(ch);
	printf("The length of string is %d\n",len);
	strcpy(ch1,ch);
	puts(ch1);
	strrev(ch1);
	printf("\n");
	puts(ch1);
	return 0;
}
