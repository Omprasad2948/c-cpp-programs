#include<stdio.h>
#include<string.h>

int main(){
	
	int i=0,len=0,sum=0;
	char ch[20];
	printf("Enter the string :\n");
	gets(ch);
	while(ch[i]!='\0'){
		i++;
		len++;
	}
	printf("length=%d\n\n",len);
	for(i=0;i<len;i++){
		if(ch[i]>=48 && ch[i]<=57){
			sum=sum+(ch[i]-48);
		}
	}
	printf("The sum in the number of string is %d ",sum);
	
	
	
	return 0;
}
