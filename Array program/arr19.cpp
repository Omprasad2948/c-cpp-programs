#include<stdio.h>

int main(){
	
	int size,i,j,max,sum;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the elements in the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	
	max=0;
	for(i=0;i<size;i++){
		int sum=a[i];
		for(j=0;j<size;j++){
			if(a[i]==a[j])
			continue;
			else
			{
			sum=sum+a[j];
			
			if(sum>max){
			max=sum;
	         	}
	         	
	         }
		}
	
		
	}
	
	printf("\nThe max number is %d",max);
	
	
	
	return 0;
}

//11 8 -20 5 
