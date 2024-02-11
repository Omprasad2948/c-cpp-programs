//Reading the data using getc function

#include<stdio.h>

int main(){
	
	FILE *ptr;
	ptr=fopen("D:\\File handeling\\om.txt","a");
	printf("The data in above file is\n");
	char ch;
	int i=0;
	do{
		scanf("%c",&ch);
		if(ch=='$'){
			break;
		}
		fputc(ch,ptr);
	}while(1);

	printf("The added to the end successfully....");

	
	return 0;
}
