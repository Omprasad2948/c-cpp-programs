#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,a[5],len,first ,second;
	printf("Enter the element in array:\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("The array is:\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe array after sorting is :\n");
	for(i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe missing elements are :\n");
	for(i=0;i<len;i++){
		first=a[i];
		second=a[i+1];
		for(int j=first+1;j<second;j++){
			printf("%d\t",j);
		}
	}
	
	
	return 0;
}
