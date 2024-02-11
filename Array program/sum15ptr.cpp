#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int i,*ptr,size,j;
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
	
	printf("\nThe index numbers where sum=15 :\n");
	for(i=0;i<size;i++){
		for(j=(i+1);j<size;j++){
			if(*(ptr+i)+*(ptr+j)==15){
				printf("\n%d %d \n",i,i+j);
			}
		}
	}
	
	
	
	
	
	return 0;
}
