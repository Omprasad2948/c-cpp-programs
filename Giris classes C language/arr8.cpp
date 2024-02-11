#include<stdio.h>
#include<conio.h>

int main(){
	
	// input the array and print the array
	int p;
	printf("Enter the size of p :\n");
	scanf("%d",&p);
	int a[p],i,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("The length of array is %d\n",len);
	printf("Enter the array elements :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Display the Array :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
