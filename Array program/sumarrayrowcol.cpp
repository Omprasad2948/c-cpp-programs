#include<stdio.h>
#include<conio.h>
int main(){
	int a[3][3],b[3][3],sum;
	printf("Enter First 2D Array :\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nThe First 2D Array is:\n");
	for(int i=0;i<3;i++){
		sum=0;
		for(int j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe sum of the row of array is :\n");
	for(int i=0;i<3;i++){
		sum=0;
		for(int j=0;j<3;j++){
			sum=sum+a[i][j];
			printf("%d\t",a[i][j]);
		}
		printf("=%d\n",sum);
	}
	printf("\nThe sum of the column of array is :\n");
	for(int i=0;i<3;i++){
		sum=0;
		for(int j=0;j<3;j++){
			sum=sum+a[j][i];
			printf("%d\t",a[i][j]);
		}
		printf("=%d\n",sum);
	}
	
	return 0;
}
