#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,a[100],size,j;
	printf("Enter the size of the array :\n");
	scanf("%d",&size);
	printf("Enter the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe array is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<size;i++){
		
		for(j=(i+1);j<size;j++){
			if(a[i]>a[j]){
				int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	
	
	printf("\nThe array after ascending is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<size;i++){
		
		for(j=(i+1);j<size;j++){
		if(a[i]<a[j]){
				int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	
	
	printf("\nThe array after descending is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	
	return 0; 
}
