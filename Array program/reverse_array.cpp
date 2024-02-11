#include<stdio.h>
#include<conio.h>
int main(){
	
	int a[5],i,len;
	printf("Enter the array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	
	int mid=len/2;
	int last=len-1;
	for(i=0;i<mid;i++){
		int temp=a[i];
		a[i]=a[last];
		a[last]=temp;
		last--;
	}
	printf("\nThe array after reverse is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
