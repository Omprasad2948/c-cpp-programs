#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int size,i,*ptr,j,max;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	ptr=(int *)malloc(sizeof(size));
	
	printf("Enter the element in the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	} 
	
	printf("The array is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	//printf("\nThe elements where the sum is 5:\n");
	printf("\n");
	for(i=0;i<size-3;i++){
		max=*(ptr+i);
		for(j=i;j<i+4;j++){
			if(*(ptr+j)>max){
				max=*(ptr+j);
			}
			printf("%d\t",*(ptr+j));
		}
		printf("-------->%d\n",max);
	}
	return 0;
	
}
