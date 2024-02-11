#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int size,*ptr,i,temp;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	
	ptr=(int*)malloc(size*sizeof(int));
	printf("\nEnter the element in the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	printf("\nEnter the element in the array :\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}

	printf("\nThe array after the Descending order is :\n");
	for(i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(*(ptr+i)==0){
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	
	return 0;
}
