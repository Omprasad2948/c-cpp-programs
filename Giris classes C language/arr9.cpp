#include<stdio.h>
#include<conio.h>
int main(){
	
	int a[5],b[5],len,i;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the element in array :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<len;i++){
		b[i]=a[i];
	}
	printf("\nCopying the array A element in Array B :\n");
		for(i=0;i<len;i++){
		printf("%d\t",b[i]);
	}
	return 0;
}
