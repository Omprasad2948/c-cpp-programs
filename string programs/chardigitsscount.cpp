#include<stdio.h>
#include<string.h>

int main(){
	
	int i=0,len=0,c=0,d=0,s=0;
	char ch[20];
	printf("Enter the string :\n");
	gets(ch);
	while(ch[i]!='\0'){
		i++;
		len++;
	}
	printf("length=%d\n\n",len);
	for(i=0;i<len;i++){
		if((ch[i]>=65&&ch[i]<=90) || (ch[i]>=97 && ch[i]<=122)){
			c++;
		}
		else if(ch[i]>=48 && ch[i]<=57){
			d++;
		}
		else{
			s++;
		}
	}
	printf("Character =%d\n",c);
	printf("Digit =%d\n",d);
	printf("Special Symbol =%d\n",s);
	
	
	
	
	return 0;
}
