#include<stdio.h>

int arraySum(int a[],int size){
	int sum=0;
	printf("The array is:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",a[i]);
		sum=sum+a[i];
	}
	return sum;
}
int main(){
	
	int size,i,result;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter the array elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	result=arraySum(a,size);
	printf("\n\nThe sum of an array is:%d",result);
	
	
	return 0;
}
