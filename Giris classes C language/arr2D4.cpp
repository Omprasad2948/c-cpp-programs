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
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//	printf("The sum of right digonal:\n");
		int sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		 if(i==j){
		 	sum=sum+a[i][j];
		 }
		}
		//printf("\n");
	}
	printf("The sum of right diagonal is %d\n",sum);
	sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		 if(j==2-i){
		 	sum=sum+a[i][j];
		 }
		}
		//printf("\n");
	}
	printf("The sum of left diagonal is %d\n",sum);
	
	return 0;
}
