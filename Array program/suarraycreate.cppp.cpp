#include<stdio.h>
#include<conio.h>
int main(){
	int a[5],i,len,first,last;
	printf("Enter the element in array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe arrays is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nEnter the first index :\n");
	scanf("%d",&first);
	
	printf("Enter the last index :\n");
	scanf("%d",&last);
	printf("The subarray is:\n");
	for(i=first;i<=last;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
