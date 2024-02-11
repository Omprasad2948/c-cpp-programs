#include<stdio.h>
#include<conio.h>
int main(){
	
	int a[3][3],count=0,cnt=0,mid;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]==0){
				cnt++;
			}
			count++;
		}
	}
	mid=count/2;
	if(cnt>mid){
		printf("The matrix is Sparse matrix");
	}
	else{
		printf("The Matrix is dense matrix");
	}
	
	
	
	return 0;
}
