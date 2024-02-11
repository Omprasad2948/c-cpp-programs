#include<stdio.h>
#include<string.h>

int main(){
	FILE *ptr;
	ptr=fopen("D://Employee.txt","r");
	
	int id,sal;
	char name[90],emptype[90];
	
	while(fscanf(ptr,"%d%s%d%s",&id,&name,&sal,&emptype)!=-1)
	{
		printf("%d\t%s\t%d\t%s\n",id,name,sal,emptype);
	}
	
	
	return 0;
}
