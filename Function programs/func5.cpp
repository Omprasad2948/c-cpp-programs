#include<stdio.h>
int arrayLarge(int a[],int size,int large){
	for(int i=0;i<size;i++){
		printf("%d\t",a[i]);
		if(large<a[i]){
			large=a[i];
		}
	}
	return large;
}

int main(){
	
	int size,i,large;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	
	int a[size];
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	large=a[0];
	int max=arrayLarge(a,size,large);
	printf("\n\nThe largest element from the array is %d",max);
	
	
	return 0;
}
