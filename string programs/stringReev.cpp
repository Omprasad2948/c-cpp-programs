#include<stdio.h>
#include<string.h>

int main(){
	
	char ch[50];
	int i=0,len=0,j,temp;
	printf("Enter the string:\n");
	gets(ch);
	while(ch[i]!=0){
		len++;
		i++;
	}
	printf("The string after reverse is :\n");
	for(i=0,j=len-1;i<len/2;i++,j--){
		temp=ch[i];
		ch[i]=ch[j];
		ch[j]=temp;
	}
	puts(ch);
	
	return 0;
}
