#include<stdio.h>
#include<conio.h>

int main(){
	
	//Reverse the array
	
	int a[5],i,len,sum=0;
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the array elements :\n");
	
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Display the Array :\n");
	
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	
	printf("\nReverse of Array :\n");
	
	for(i=(len-1);i>=0;i--){
		printf("%d\t",a[i]);
	}
	
	

	return 0;
}
