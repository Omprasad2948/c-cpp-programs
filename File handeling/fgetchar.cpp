#include<stdio.h>
#include<conio.h>

int main(){
	//print the data from the file single singke character...
	FILE *ptr;
	ptr= fopen("D://demo.txt","r");
	
	char ch;
	do {
		ch=fgetc(ptr);
		
		if(ch==-1){
			break;
		}
		printf("%c",ch);
	}while(1);
	
	printf("\nThe all data printed...");
	
	
	
	return 0;
}
