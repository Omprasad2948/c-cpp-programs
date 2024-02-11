#include<stdio.h>
#include<conio.h>

int main(){
	
	// Calculate the sum of the array
	
	int a[5],i,len,sum=0;
	len=sizeof(a)/sizeof(a[0]);
	printf("The length of array is %d\n",len);
	printf("Enter the array elements :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Display the Array :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
		sum=sum+a[i];
	}
	printf("\nThe sum of the Arrays element is %d",sum);
	return 0;
}
