#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int size,*ptr,i,temp,count=0;
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
	
	printf("\nAll inversions are :\n");
	for(i=1;i<size-2;i++){
		for(int j=i+1;j<size;j++){
			printf("\n%d %d\n",*(ptr+i),*(ptr+j));
			count++;
			}
		}
	printf("The total number of inversions are : %d",count);
	
	return 0;
}
