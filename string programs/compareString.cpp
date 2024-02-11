#include<stdio.h>
#include<string.h>

int main(){
	char str1[20],str2[20];
	printf("Enter the first string.\n");
	gets(str1);
	printf("Enter the second string.\n");
	gets(str2);
	int x=strcmp(str1,str2);
	if(x>0){
		printf("%s is greater than %s",str1,str2);
	}
	else if(x<0){
		printf("%s is greater than %s",str2,str1);
	}
	else{
		printf("%s is same as %s",str1,str2);
	}
}

