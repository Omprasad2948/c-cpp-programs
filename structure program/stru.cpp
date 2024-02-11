#include<stdio.h>

int main(){
	
	void studentinfo(int,char[],float,char[]);
	int id;
	char name[90],address[90];
	float per;
	printf("Enter the id, name ,percenrage and adress of student.\n");
	scanf("%d",&id);
	_flushall();
	gets(name);
	scanf("%f",&per);
	_flushall();
	gets(address);
	studentinfo(id,name,per,address);
	
	
	return 0;
}
void studentinfo(int id,char name[],float per,char address[])
{
	printf("Student id is : %d\n",id);
	printf("Student name is : %s\n",name);
	printf("Student id is : %f\n",per);
	printf("Student id is : %s\n",address);
}
