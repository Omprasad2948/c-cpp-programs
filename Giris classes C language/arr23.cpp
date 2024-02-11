#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,a[100],size,index,value;
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
	printf("\nEnter the index:\n");
	scanf("%d",&index);
	printf("Enter the value :\n");
	scanf("%d",&value);
	printf("After chaging the value :\n");
	for(i=0;i<size;i++){
		if(i==index){
			a[i]=value;;
		printf("%d\t",a[i]);
		}
		else{
			printf("%d\t",a[i]);
		}
	}

	return 0; 
}
