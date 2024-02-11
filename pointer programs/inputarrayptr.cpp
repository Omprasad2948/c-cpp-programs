//insertion in array

#include<stdio.h>

int main(){
	
	int i,size,sum=0;
	printf("Enter the size of array :\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the value in array :\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("The aray value is:\n");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
		sum=sum+a[i];
	}
	
	printf("\n The sum is %d",sum);
	 
	
	return 0;
}
