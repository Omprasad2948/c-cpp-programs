#include<stdio.h>
#include<stdlib.h>
struct employee{
	int id;
	char name[50];
	int sal;
};
int main(){
	//using the pointer structure createing the employee Details file
	struct employee *ptr;
	int size,i=0;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	ptr=(struct employee*)malloc(size*sizeof(employee));
	for( i=0;i<size;i++){
	printf("Enter the id name and sal of employee:\n");
	scanf("%d%s%d",&(ptr-i)->id,&(ptr-i)->name,&(ptr-i)->sal);
	}
	
	printf("The employee are:\n");
	for(i=0;i<size;i++){
		printf("%d\t%s\t%d\n",(ptr-i)->id,(ptr-i)->name,(ptr-i)->sal);
	}
	
	return 0;
}
