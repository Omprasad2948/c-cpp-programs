#include<stdio.h>
#include<conio.h>
int main(){
	int a[40],len,i,j,temp,end;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the array element :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is:\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	
	int mid=len/2;
	end=(len-1);
	printf("\nThe array after Reverse :\n");
	for(i=0;i<mid;i++){
		temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		end--;
	}
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe array after minus five from every intenger :\n");
	for(i=0;i<len;i++){
		a[i]=a[i]-5;
		printf("%d\t",a[i]);
	}
	printf("\nThe character is :\n");
	for(i=0;i<len;i++){
		printf("%c",a[i]);
	}
	
	return 0;
}
