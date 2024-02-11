#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int *ptr,size,i;
	printf("Enter the size :\n");
	scanf("%d",&size);
	
	ptr=(int*)malloc(size*sizeof(int));
	printf("Enter the elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	printf("The array is :\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	printf("\nThe array after sorting is :\n");
	for(i=0;i<size;i++){
		for(int j=(i+1);j<size;j++){
			if(*(ptr+i)<*(ptr+j)){
			int temp=*(ptr+i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=temp;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	
	printf("\nThe second largest element is :\n");
	for(i=0;i<size;i++){
		if(*(ptr+i)==*(ptr+i+1)){
			*(ptr+i)=*(ptr+i+1);
		}
		else{
			++i;
			printf("%d\t",*(ptr+i));
			break;
		}
	}
	
	return 0;
}
