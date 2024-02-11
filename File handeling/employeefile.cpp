#include<stdio.h>
#include<string.h>

int main(){
	
	FILE *ptr;
	ptr=fopen("D://Employee.txt","a");
	
	int id,sal;
	char name[90],emptype[90];
	printf("Enter the employee details...\n");
	scanf("%d%s%d%s",&id,&name,&sal,&emptype);
	if(strcmp(emptype,"permenant")==0){
		fprintf(ptr,"%d\t%s\t%d\t%s\n",id,name,sal,emptype);
		printf("The employee details save successfully........");
	}
	else
	{
		printf("The employee is not permenant....");
	}
	
	
	fclose(ptr);
	
	
	return 0;
}


