#include<stdio.h>
int arraySsmall(int a[],int size){
	int Ssmall;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
			Ssmall=a[i];
			break;
	
	}
	return Ssmall;
}

int main(){
	
	int size,i;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter the array elements:\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	
	int Ssmall=arraySsmall(a,size);
	printf("\n\nThe Smallest element from the array is %d",Ssmall);
	
	
	return 0;
}
