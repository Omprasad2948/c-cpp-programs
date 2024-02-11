#include<stdio.h>

int main(){
	
	int size,*ptr;
	printf("Enter the array size :\n");
	scanf("%d",&size);
	int a[size];
	ptr=a;
	
	for(int i=1;i<=size;i++){
		scanf("%d",ptr);
		ptr++;
	}
	
	ptr=ptr-size;
	
	for(int i=1;i<=size;i++){
		printf("\n%u------>%d",ptr,*ptr);
		ptr++;
	}
	
	
	return 0;
}
