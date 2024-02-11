#include<stdio.h>
#include<conio.h>
int main(){
	
	int a[5],i,len,j,temp;
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
	int flag;
	for(i=0;i<len;i++){
		
		flag=0;
		for(j=i+1;j<len;j++){
			if(a[i]==a[j]){
				a[j]=-1;
				flag=1;
			}
		}
		if(flag){
			a[i]=-1;
		}
		
	}
	
	for(i=0;i<len;i++){
		if(a[i]!=-1){
			printf("%d\t",a[i]);
		}
		
	}
	
	return 0;
}
