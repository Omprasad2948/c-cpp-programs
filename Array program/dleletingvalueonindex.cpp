#include<stdio.h>
#include<conio.h>
int main(){
	int a[5],i,len,index;
	printf("Enter the element in array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe arrays is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nEnter the index to delete the value :\n");
	scanf("%d",&index);
	printf("\nThe array after the deleting the value on the index :\n");
	for(i=0;i<len;i++){
		if(i==index){
			i=i+1;
			printf("%d\t",a[i]);
		}
		else{
			printf("%d\t",a[i]);
		}
	}
	
}
