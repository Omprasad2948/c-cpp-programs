#include<stdio.h>
#include<stdlib.h>


int main(){
	
	FILE *ptr;
	char ch;
	ptr=fopen("D://demo.text","w");
    printf("Enter the data \n");
    while(1){
    	scanf("%c",&ch);
    	if(ch=='$'){
    		break;
		}
		fprintf(ptr,"%c",ch);
	}
	printf("File save successfully......");
	fclose(ptr);
	
	ptr=fopen("D://demo.text","r");
	char str;
	printf("\nThe capital letters are above.\n");
	do{
		str=fgetc(ptr);
		if(str>='A'&&str<='Z'){
			printf("%c",str);
		}
		if(str==-1){
			break;
		}
	}while(1);
	fclose(ptr);
	
	ptr=fopen("D://demo.text","r");
	str;
	printf("\nThe small letters are above.\n");
	do
	{
		str=fgetc(ptr);
		if(str>='a'&&str<='z'){
			printf("%c",str);
		}
		if(str==-1){
			break;
		}
	}while(1);
	fclose(ptr);
	
	ptr=fopen("D://demo.text","r");
	str;
	printf("\nThe digits are above.\n");
	do{
		str=fgetc(ptr);
		if(str>='0'&&str<='9'){
			printf("%c",str);
		}
		if(str==-1){
			break;
		}
	}while(1);
	fclose(ptr);
	ptr=fopen("D://demo.text","r");
	str;
	printf("\nThe digits are above.\n");
	do{
		str=fgetc(ptr);
		if(str>='0'&&str<='9' ){
			printf("%c",str);
		}
		if(str==-1){
			break;
		}
	}while(1);
	fclose(ptr);
	
	return 0;
}
