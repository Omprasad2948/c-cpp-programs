#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int i,*ptr,size,index;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	
	printf("Enter the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	
	printf("The array is :\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	
	printf("\nEnter the index where you want to rotate the array :\n\n\n");
	scanf("%d",&index);
	if(index>4){
		printf("\nInvalid index\n");
	}
	else {
		for(i=index;i<size;i++){
			printf("%d\t",*(ptr+i));
		}
		for(i=0;i<index;i++){
			printf("%d\t",*(ptr+i));
		}
	}
	
	
	return 0;
}
