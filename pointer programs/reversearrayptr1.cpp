#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int size,i,*q,*ptr;
	printf("Enter the size :\n");
	scanf("%d",&size);
	
	ptr=(int*)malloc(size*sizeof(int));
	
	printf("Enter the value :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	
	printf("\nThe array is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	
	q=ptr+size-1;
	printf("\nThe array after the reverse is:\n");
	for(i=0;i<size/2;i++){
		int temp=*ptr;
		*ptr=*q;
		*q=temp;
		ptr++;
		q--;
	}
	ptr=ptr-(size/2);
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	
	
	
	return 0;
}
