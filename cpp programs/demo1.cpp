#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int *ptr,size;
	printf("Enter the size of an arra:\n");
	scanf("%d",&size);
	ptr=(int *)malloc(size*sizeof(int));
	
	printf("Enter the elements in the array :\n");
	for(int i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	
	printf("The array is :\n");
	for(int i=0;i<size;i++){
		printf("%d",*(ptr+i));
	}
	

	
	return 0;
}
