#include<stdio.h>
int max=0;
int getMax(int a[],int size){
	if(size>=0){
		if(a[--size]>max){
			max=a[size];
		}
		getMax(a,--size);
	}
	return max;
}

int main(){
	
	int size,i;
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	
	int a[size],result;
	printf("Enter the array elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
    result=getMax(a,size);
	printf("The maximum number is %d",result);
}
