#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,a[100],size,flag=0;
	printf("Enter the size of a array :\n");
	scanf("%d",&size);
	
	printf("Enter the first array  :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}

	printf("The array is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);		
	}
	int len=size/2;
	for(i=0;i<size;i++){
		for(int j=(i+1);j<size;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nThe array after the sorting is :\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<size;i++)
	{	
		int count=1;
		for(int j=(i+1);j<size;j++){
			if(a[i]==a[j]){
				count++;
			}
			if(count>len){
				flag=1;
				break;
			}
		}
	
	if(flag==1)
	{
		printf("\nThe Array Majority and the number is %d ",a[i]);
		break;
	}
	else
	 {
			if(i>len){
				printf("\nThe Array is not majority. ");
			}
		
	 }
}
	return 0; 
}
