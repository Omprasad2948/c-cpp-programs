#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	
	FILE *ptr;
	ptr=fopen("D://demo.txt","a");
	fprintf(ptr,"This is my first sentence which i stored n te file...");
	fprintf(ptr,"\n");
	fclose(ptr);
	printf("The data saved successfully......");
	
	return 0;
}
