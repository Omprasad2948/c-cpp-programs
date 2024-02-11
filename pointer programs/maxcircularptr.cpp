#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int size,i,*ptr,sum;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(size));
	printf("Enter the array elemnent :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	printf("The array is:\n");
	for(i=0;i<size;i++){
		
		printf("%d\t",*(ptr+i));
	}
	
	printf("\nThe sum of max sum array");
	int max=*(ptr);
	sum=0;
	for(i=0;i<size;i++){
		
		for(int j=i;j<size;j++){
			sum=sum+*(ptr+j);
		}
		if(sum>max){
			max=sum;
		}
	}
	printf("%d",max);
	
	return 0;
}
