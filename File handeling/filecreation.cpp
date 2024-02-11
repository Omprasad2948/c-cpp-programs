#include<stdio.h>

int main(){
	
	FILE *ptr;
	ptr=fopen("D:\\File handeling\\om.txt","a");  // if we use different extension the differents type of file can be create.
	if(ptr==NULL){
		printf("Error.....\n");
	}
	else{
		printf("The files created successfully....\n");
	}
	fprintf(ptr,"This is my first file which is created in practical lab\n");
	fprintf(ptr,"Now i am working with the apend mode to check how the append mode works..\n");
	//the meaing of the append is add to the end....
	
	return 0;
}
