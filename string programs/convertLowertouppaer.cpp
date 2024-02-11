#include<stdio.h>
#include<string.h>

int main(){
	
	int i=0,len=0,x;
	char ch[20];
	printf("Enter the string :\n");
	gets(ch);
	
	while(ch[i]!='\0'){
		len++;
		i++;
	}
	//printf("Length = %d\n",len);
	printf("The string after conversion :\n");
	for(i=0;i<len;i++){
		x=ch[i];
		if(x>=65 && x<=90){
			x=x+32;
			printf("%c",x);
			continue;
		}
		else if(x>=97 && x<=122){
			x=x-32;
			printf("%c",x);
			continue;
		}
		else if(x=' '){
				printf("%c",x);
			continue;
		}
	}
	
	
	return 0;
}
