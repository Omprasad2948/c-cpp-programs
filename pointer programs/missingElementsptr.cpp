#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int i,j,*ptr,temp,size;
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	printf("Enter the array elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	
	printf("\nThe array is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	
	printf("\nThe Array after sorting is :\n");
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(*(ptr+i)>*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	printf("\nThe missing elements are :\n");
	for(i=0;i<size;i++){
		for(j=*(ptr+i)+1;j<*(ptr+i+1);j++){
			printf("%d\t",j);
		}
	}
	
	
	return 0;
}
