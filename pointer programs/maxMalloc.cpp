//insertion in array

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *ptr,i,size,max ,min;
	printf("Enter the size:\n");
	scanf("%d",&size);
	
	ptr=(int*)malloc(size*sizeof(int));
	printf("Enter the value :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
//		scanf("%d",&pr[i];
	}
	
	printf("The value is :\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	printf("\nThe max value is:\n");
	max=*ptr;
	for(i=0;i<size;i++){
		if(*(ptr+i)>max){
			max=*(ptr+i);
		}
	}
	 printf("%d",max);
	 printf("\nThe min value is:\n");
	min=*ptr;
	for(i=0;i<size;i++){
		if(*(ptr+i)<min){
			min=*(ptr+i);
		}
	}
	 printf("%d",min);
	
	return 0;
}
