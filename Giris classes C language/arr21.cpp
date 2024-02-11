#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,a[100],b[100],size,flag=0;
	printf("Enter the size of a array :\n");
	scanf("%d",&size);
	
	printf("Enter the first array  :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}

	printf("The array is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
		b[i]=a[i];		
	}
	printf("\nThe reverse array is :\n");
	int mid=size/2;
	int end=size-1;
	for(i=0;i<mid;i++){
	int temp=b[i];
	b[i]=b[end];
	b[end]=temp;
	end--;	
	}
	
	for(i=0;i<size;i++){
		printf("%d\t",b[i]);
	}
		
	for(i=0;i<size;i++){
		if(a[i]!=b[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("\nThe Array is not palindrome. ");
	}
	else {
			printf("\nThe Array is palindrome. ");
	}
		
	return 0; 
}
