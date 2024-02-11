//insertion in array

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *ptr,i,size;
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
	
	 
	
	return 0;
}
