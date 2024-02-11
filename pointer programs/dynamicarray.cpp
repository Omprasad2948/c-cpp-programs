#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int size,*ptr,i;
	printf("Enter the size :\n");
	scanf("%d",&size);
	//size alocation to the pointer
 ptr = (int*)malloc(size * sizeof(int));
//	free(ptr);  this free element is used to free the array
	if(ptr==NULL){
		printf("The pointer is empty :\n");
	}
	else{
		printf("Enter the element in the array :\n");
		for(i=0;i<size;i++){
			scanf("%d",(ptr+i));
		}
		
		printf("\nThe array is :\n");
		for(i=0;i<size;i++){
			printf("%d\t",*(ptr+i));
		}
	}
	
	return 0;
}
