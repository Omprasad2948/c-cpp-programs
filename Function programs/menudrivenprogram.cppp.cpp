#include<stdio.h>
void maxElement(int a[],int size){
	int max=a[0];
	for(int i=0;i<size;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("\nThe max number in array is %d\n",max);
}
void minElement(int a[],int size){
	int min=a[0];
	for(int i=0;i<size;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	printf("\nThe min number in array is %d\n",min);
}
void reverseElement(int a[],int size){
	int mid=size/2;
	int end=size-1;
	for(int i=0;i<mid;i++){
		int temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		end--;
	}
	printf("\nThe array after Reverse is:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
}
void primeElement(int a[],int size){
	printf("\nThe prime number in the array is:\n");
	for(int i=0;i<size;i++){
		int count=0;
		for(int j=1;j<=a[i];j++){
			if(a[i]%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d\t",a[i]);
			count=0;
		}
	}
}
    void evenOddElement(int a[],int size){
		printf("\nThe even elements are:\n");
		for(int i=0;i<size;i++)
		{
			if(a[i]%2==0){
				printf("%d\t",a[i]);
			}
		}
		printf("\nThe odd elements are:\n");
		for(int i=0;i<size;i++){
			if(a[i]%2!=0){
				printf("%d\t",a[i]);
			}
		}
	}
	void sumElement(int a[],int size){
		int sum=0;
			for(int i=0;i<size;i++){
				sum+=a[i];
			}
		printf("\nThe sum of array is %d\n",sum);
	}	
	
	void removeDuplicateElement(int a[],int size){
		for(int i=0;i<size;i++){
			for(int j=i+1;j<size;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			}
		}
		printf("\nThe array after the removing the dupliacte element:\n");
		for(int i=0;i<size;i++){
			if(a[i]==a[i+1]){
				a[i]=a[i+1];
			}
			else{
				printf("%d\t",a[i]);
			}
		}
	}

int main(){
	int i,size;
	int choice;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the array elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	do{
		printf("\n\nEnter the number to perform operation :\n");
		printf("1-Find max Element\n");
		printf("2-Find min Element\n");
		printf("3-Reverse Element in array\n");
		printf("4-Prime number in array\n");
		printf("5-Even and odd number in array\n");
		printf("6-Sum of array elements\n");
		printf("7-Remove Duplicate elements\n");
		printf("8-For Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				maxElement(a,size);	
				break;
				
			case 2:
				minElement(a,size);		
				break;
				
			case 3:
			   	reverseElement(a,size);
				break;	
				
			case 4:
				primeElement(a,size);			
				break;
			
			
			case 5:
				evenOddElement(a,size);			
				break;
				
			case 6:
				sumElement(a,size);
				break;
				
			case 7:
				removeDuplicateElement(a, size);	
			  default:
			  	break;
		}
	}while(choice!=8);
	
	
	
	
	

	return 0;
}
