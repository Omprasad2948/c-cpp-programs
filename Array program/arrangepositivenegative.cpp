#include<stdio.h>
#include<conio.h>
int main(){
	int a[11],i,len,b[11],k=0,l=1;
	printf("Enter the element in array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe arrays is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<len;i++){
		if(a[i]%2==0){
			b[k]=a[i];
			k=k+2;
		}
	}
	k=1;
	for(i=0;i<len;i++){
		if(a[i]%2!=0){
			b[k]=a[i];
			k=k+2;
		}
	}
	printf("\nThe arrays after arranging positive and negative is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",b[i]);
	}
	
	return 0;
}
