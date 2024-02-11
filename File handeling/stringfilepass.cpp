// string store in the file ...
#include<stdio.h>
#include<string.h>

int main(){
	
	FILE *ptr;
	ptr = fopen("D://stringdemo.txt","a");
	char data[90];
	
	do{
		
		gets(data);
		fputs(data,ptr);
		fputs("\n",ptr);
		if(strlen(data)==0){
			break;
		}
		
	}while(1);
	
	
	
	return 0;
}

