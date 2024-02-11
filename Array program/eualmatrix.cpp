#include<stdio.h>
#include<conio.h>
int main(){
	int a[3][3],b[3][3],flag=0;
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
	printf("\nEnter second 2D Array :\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nThe second 2D Array is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(a[i][j]!=b[i][j]){
			flag=1;
			break;
		}		
		}
	}
	if(flag==1){
		printf("\nThe matrix is not equal .");
	}
	else 
	{
			printf("\nThe matrix is equal .");
	}
	return 0;
}
