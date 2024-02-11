#include<stdio.h>
#include<conio.h>
int main(){
	
	int i;
	printf("Enter the length of an Array :\n");
	scanf("%d",&i);
	int a[i];
	int len= sizeof(a)/sizeof(a[0]);
	
	printf("Enter The Array :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe Array is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	int index;
	printf("\nEnter the index where you want to rotate the array :\n");
	scanf("%d",&index);
	for(i=index;i<len;i++){
		printf("%d\t",a[i]);
	}
	for(i=0;i<index;i++){
		printf("%d\t",a[i]);
	}
	
	return 0;
}
