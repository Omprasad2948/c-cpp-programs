#include<stdio.h>
#include<conio.h>
int main(){
	
	int a[10],i,len,j,temp;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the array element :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe aray element is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe array after  sorting :\n");
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
	    	}
		}
	}
		for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe unique element in the array is :\n");
	for(i=0;i<len;i++){
		if(a[i]==a[i+1]){
			a[i]=a[i+1];
		}
		else{
			printf("%d\t",a[i]);
		}
	}
//	printf("\n%d",sizeof(a));
	
	
	return 0;
}
