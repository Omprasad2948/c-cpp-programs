#include<stdio.h>
#include<string.h>

int main(){
	
	int i=0,len=0,j,x;
	printf("Enter the string :\n");
	char ch1[20],ch2[20];
	gets(ch1);
	
	while(ch1[i]!='\0'){
		len++;
		i++;
	}
	printf("\nThe length of string is  :%d\n",len);
	
	for(i=len-1,j=0;i>=0;i--,j++){
		ch2[j]=ch1[i];
	}
	ch2[j]='\0';
	printf("\nThe string after reverse is :%s\n",ch2);
	
	for(i=0;i<=len;i++){
		x=ch1[i]-ch2[i];
		if(x!=0){
			break;
		}
	}
	if(x==0){
		printf("\nThe string is palindrome\n");
	}
	else
	{
		printf("\nThe string is palindrome\n");
	}
	
	return 0;
}
