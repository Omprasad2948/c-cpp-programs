#include<stdio.h>
#include<conio.h>
int main(){
	int a[3][3];
	printf("Enter 2D Array :\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The 2D Array is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
