#include<stdio.h>


int main(){
	
	// adding the data to the file using fputc inbilt function
	FILE *ptr;
	ptr=fopen("D:\\File handeling\\om.txt","a");
	char ch;
	printf("\nEnter the data in the file\n");
	do{
		scanf("%c",&ch);
		if(ch=='$'){
			break;
		}
		fputc(ch,ptr);
	}while(1);
	printf("\nThe data saved the successfuly...");
	fclose(ptr);
	return 0;
}
