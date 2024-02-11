#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	FILE *ptr;
//	ptr==NULL;
	ptr=fopen("D:\om.txt","w");
	
		printf("This is my first file!");

	fclose(ptr);
	
	
	
	return 0;
}
