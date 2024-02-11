#include<stdio.h>
#include<string.h>

int main(){
	
	int i=0,len=0,count=1,j;
	char ch[20],temp;
	printf("Enter the string :\n");
	gets(ch);
	while(ch[i]!='\0'){
		i++;
		len++;
	}
//	printf("length=%d\n\n",len);
	for(i=0;i<len;i++){
		if(ch[i]>=97 && ch[i]<=122){
			ch[i]=ch[i]-32;
		}
	}
		for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(ch[i]<ch[j]){
				temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
			}
		}
	}
	
	printf("The string after Descending order =%s",ch);
	
	
	
	return 0;
}
