#include<stdio.h>
int arraySLarge(int a[],int size){
	int Smax;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		if(a[i]==a[i+1]){
			a[i]==a[i+1];
		}
		else{
			Smax=a[++i];
			break;
		}
	}
	return Smax;
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
	
	
	int Smax=arraySLarge(a,size);
	printf("\n\nThe largest element from the array is %d",Smax);
	
	
	return 0;
}
