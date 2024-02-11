#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,a[100],b[100],c[100],size,j,k=0;
	printf("Enter the size of a array :\n");
	scanf("%d",&size);
	
	printf("Enter the first array  :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	j=i;
	printf("Enter the second array :\n");
	for(i=0;i<size;i++){
		scanf("%d",&b[i]);
		c[j++]=b[i];
		//j++;
	}
	printf("The merged array is :\n");
	for(i=0;i<j;i++){
		printf("%d\t",c[i]);
	}
	
	return 0; 
}
