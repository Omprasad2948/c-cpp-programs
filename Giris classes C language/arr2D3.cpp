#include<stdio.h>
int main(){
	
	int i,j;
	int a[3][3];
	printf("Input the two dimension of array :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The two d array is:\n");
	for(i=0;i<3;i++){
		int sum=0;
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
			sum=sum+a[i][j];
		}
		printf(" = %d",sum);
		printf("\n");
	}
	
	
	return 0;
}
