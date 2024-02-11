#include<stdio.h>
#include<conio.h>

int main(){
	
	// find the even and odd number in array
	
	int a[5],i,len,sum=0;
	len=sizeof(a)/sizeof(a[0]);
	//printf("The length of array is %d\n",len);
	printf("Enter the array elements :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Display the Array :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("The even number in the Array is :\n");
	for(i=0;i<len;i++){
		if(a[i]%2==0){
		printf("%d\t",a[i]);
		}
	}
	
	
	printf("\nThe odd number in the Array is :\n");
	for(i=0;i<len;i++){
		if(a[i]%2!=0){
		printf("%d\t",a[i]);
		}
	}

	return 0;
}
