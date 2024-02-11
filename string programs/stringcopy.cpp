#include<stdio.h>
#include<string.h>

int main(){
	
	char ch[50],ch1[50];
	int i=0,len=0,j,temp;
	printf("Enter the string:\n");
	gets(ch);
	while(ch[i]!=0){
		len++;
		i++;
	}
	for(i=0;i<=len;i++){
		ch1[i]=ch[i];
	}
	puts(ch1);
	
	return 0;
}
