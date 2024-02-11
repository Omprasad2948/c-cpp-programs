#include<stdio.h>

void reversearray(int a[],int size){
	int mid=size/2;
	int end=size-1;
	for(int i=0;i<mid;i++){
		int temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		end--;
	}
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
	
	reversearray(a,size);
	
	return 0;
}
