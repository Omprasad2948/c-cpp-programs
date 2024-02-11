#include<stdio.h>
#include<conio.h>
int main(){
	
	FILE *ptr;
	ptr=fopen("D://demo.txt","a");
	char ch;
	
	do{
		
	scanf("%c",&ch);
	
	if(ch=='$'){
		break;
	}
	fputc(ch,ptr);
				
		
	}while(1);
	
	fclose(ptr);
	
	
	
	return 0;
}
///insert the ingle ingle character to the file.....
