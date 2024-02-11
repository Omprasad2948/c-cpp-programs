#include<stdio.h>
#include<conio.h>
int main(){
	
	int size,*ptr,i,max,min;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	int a[size];
	ptr=a;
	printf("\nEnter the element in the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	printf("\nThe element in the array :\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	max=*(ptr);
	for(i=0;i<size;i++){
		if(*(ptr+i)>max){
			max=*(ptr+i);
		}
	}
	printf("\nThe max value is %d",max);
	min=*(ptr);
	for(i=0;i<size;i++){
		if(*(ptr+i)<min){
			min=*(ptr+i);
		}
	}
	printf("\nThe min value is %d",min);
	return 0;
}
