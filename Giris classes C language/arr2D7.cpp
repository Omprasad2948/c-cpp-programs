#include<stdio.h>
int main(){
	
	int i,j;
	int a[3][3],b[3][3],c[3][3];
	printf("Input the two dimension of array :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The two d array is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Input the two dimension of array :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("The two d array is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe multiplication  of both matrix is :\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]*b[i][j];
		}
	}
	//printf("The two d array is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
