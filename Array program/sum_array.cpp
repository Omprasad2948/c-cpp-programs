#include<stdio.h>
#include<conio.h>
int main(){
	int a[5],i,len,sum=0;
	printf("Enter the element in array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe arrays is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	for(i=0;i<len;i++){
		sum=sum+a[i];
	}
	printf("\nThe sum of array is %d",sum);
}
