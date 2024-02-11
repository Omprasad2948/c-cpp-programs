#include<stdio.h>
#include<string.h>

int main(){
	
	int i=0,len=0,count=1;
	char ch[20];
	printf("Enter the string :\n");
	gets(ch);
	while(ch[i]!='\0'){
		i++;
		len++;
	}
	printf("length=%d\n\n",len);
	for(i=0;i<len;i++){
		if(ch[i]==' '){
			count++;
		}
	}
	printf("The string has %d words",count);
	
	
	
	return 0;
}
