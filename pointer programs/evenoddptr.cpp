#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int *p,size,i;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	p=(int*)malloc(size*sizeof(int));
	
	printf("Enter the array elements :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",(p+i));
	}
	
	printf("The array is :\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",*(p+i));
	}
	
	printf("\nThe even elements in the array is:\n");
	for(i=0;i<size;i++)
	{
		if(*(p+i)%2==0){
			printf("%d\t",*(p+i));
		}
	}
	
	printf("\nThe even elements in the array is:\n");
	for(i=0;i<size;i++)
	{
		if(*(p
		+i)%2!=0){
			printf("%d\t",*(p+i));
		}
	}

	return 0;
}
