#include<stdio.h>
#include<conio.h>
int main(){
	int a[5],i,len,j;
	printf("Enter the element in array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe arrays before ascending order is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe Array after ascending order is :\n ");
	for(i=0;i<len;i++){
		for(j=(i+1);j<len;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nThe arrays after ascending order is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	
}
