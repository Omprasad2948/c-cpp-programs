// string store in the file ...
#include<stdio.h>
#include<string.h>

int main(){
	
	FILE *ptr;
	ptr = fopen("D://stringdemo.txt","r");
	char data[90];
	
	do{
		
		fgets(data,20,ptr);
		if(strlen(data)==0){
			break;
		}
		printf("%s",data);
		
	}while(1);
	
	
	
	return 0;
}

