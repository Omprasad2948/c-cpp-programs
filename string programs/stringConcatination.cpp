#include<stdio.h>
#include<string.h>

int main(){
	
	char ch1[20],ch2[20];
	int i=0,j=0,len=0;
	printf("Enter the first string :\n");
	gets(ch1);
	printf("Enter the second string :\n");
	gets(ch2);
	
	while(ch1[i]!='\0'){
		len++;
		i++;
	}
	for(i=len,j=0;ch2[j]!='\0';i++,j++){
		ch1[i]=ch2[j];
	}
	printf("First string : %s\n",ch1);
	printf("second string : %s",ch2);
	
	return 0;
}
