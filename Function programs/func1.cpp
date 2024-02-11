#include<stdio.h>

void array(int a[],int size){
	printf("The array is:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
}
int main(){
	
	int size,i;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter the array elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	array(a,size);
	
	return 0;
}
