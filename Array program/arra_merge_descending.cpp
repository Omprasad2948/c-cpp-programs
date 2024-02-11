#include<stdio.h>
#include<conio.h>
int main(){
	int a[5],b[5],c[10],i,len,j,temp;
	printf("Enter the element in array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	int k=i;
	printf("\nThe  first arrays is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe second array element is :\n");
	for(i=0;i<len;i++){
		scanf("%d",&b[i]);
		c[k+i]=b[i];
	}
	printf("\nThe arrays is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",b[i]);
	}
	printf("\nThe merged array is :\n");
	for(i=0;i<10;i++){
		printf("%d\t",c[i]);
	}
	printf("\nThe array after descending is :\n");
	for(i=0;i<10;i++){
		for(j=(i+1);j<10;j++){
			if(c[i]<c[j]){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
		for(i=0;i<10;i++){
		printf("%d\t",c[i]);
	}
	
	return 0;

}

