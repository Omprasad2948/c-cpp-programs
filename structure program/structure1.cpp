#include<stdio.h>
#include<stdlib.h>
struct employee{
	int id;
	char name[50];
	int sal;
	
};
int main(){
	int size;
	struct employee *e;
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	e=(struct employee*)malloc(sizeof(employee)*size);
	for(int i=0;i<size;i++){
		printf("Enter the name id and salay of an empoyee:\n");
		scanf("%d %s %d",&e[i].id,&e[i].name,&e[i].sal);
	}
	printf("The records is :\n");
	for(int i=0;i<size;i++){
		printf("%d\t%s\t%d\n",e[i].id,e[i].name,e[i].sal);
	}
	
	
	return 0;
}

