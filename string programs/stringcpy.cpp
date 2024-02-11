#include<stdio.h>
#include<string.h>

int main(){
	
	int i=0,len=0,count=1;
	char ch[20],ch1[20];
	printf("Enter the string :\n");
	gets(ch);
	while(ch[i]!='\0'){
		i++;
		len++;
	}
	printf("length=%d\n\n",len);
	for(i=0;i<len;i++){
		ch1[i]=ch[i]; 
	}
	//i++;
	ch1[i]='\0';
	printf("The second string is %s",ch1);
	
	
	
	return 0;
}
