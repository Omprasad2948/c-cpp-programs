#include<stdio.h>

int arrayaverage(int a[],int size){
	int sum=0,average;
	printf("The array is:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",a[i]);
		sum=sum+a[i];
	}
	average=sum/size;
	return average;
}
int main(){
	
	int size,i ,av;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter the array elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	av=arrayaverage(a,size);
	printf("\n\nThe average of an array is %d",av);
	
	return 0;
}
