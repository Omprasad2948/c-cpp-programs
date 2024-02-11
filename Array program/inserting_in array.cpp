#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[6],len,index,value;
	printf("Enter the element in array:\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<(len-1);i++){
		scanf("%d",&a[i]);
	}
	printf("The array is:\n");
	for(i=0;i<(len-1);i++){
		printf("%d\t",a[i]);
	}
	printf("\nEnter the index:\n");
	scanf("%d",&index);
	printf("\nEnter the value :\n");
	scanf("%d",&value);
	printf("\nThe Array after inserting :\n");
	for(i=len-1;i>index;i--){
		a[i]=a[i-1];
	}
	a[index]=value;
	
	for(i=0;i<len;i++){
		printf(" %d ",a[i]);
		
	}
	
	
	
	return 0;
}
