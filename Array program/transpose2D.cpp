#include<stdio.h>
#include<conio.h>
int main(){
	int a[3][3];
	printf("Enter First 2D Array :\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nThe First 2D Array is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("\nThe Array after transpose is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}

	return 0;
}
