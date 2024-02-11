#include<stdio.h>
#include<conio.h>
int main(){
	
	FILE *ptr;
	ptr=fopen("D://student.txt","a");
	int id;
	char name[90],add[90];
	float per;
	printf("Enter the student id name per and address...\n");
	scanf("%d%s%f%s",&id,&name,&per,&add);
	fprintf(ptr,"%d\t%s\t%f\t%s\n",id,name,per,add);
	fclose(ptr);
	
	return 0;
}
