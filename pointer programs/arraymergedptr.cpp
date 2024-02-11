#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int *p,*q,size,i,j=0,*r;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	p=(int*)malloc(size*sizeof(int));
	r=(int*)malloc((size*2)*sizeof(int));
	printf("Enter the first array elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",(p+i));
		*(r+j)=*(p+i);
		j++;
		
	}
	q=(int*)malloc(size*sizeof(int));
	printf("Enter the second array  element :\n");
	for(i=0;i<size;i++){
		scanf("%d",(q+i));
		*(r+j)=*(q+i);
		 j++;
	}
	printf("The merged array is :\n");
	for(i=0;i<j;i++){
		printf("%d\t",*(r+i));
	}
	printf("\nThe array after sorting is :\n");
	for(i=0;i<size*2;i++){
		for(j=(i+1);j<size*2;j++){
			if(*(r+i)>*(r+j)){
			int temp=*(r+i);
			*(r+i)=*(r+j);
			*(r+j)=temp;
			}
		}
	}
	for(i=0;i<j;i++){
		printf("%d\t",*(r+i));
	}
	return 0;
}
