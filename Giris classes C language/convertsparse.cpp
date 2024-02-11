#include<stdio.h>
#include<conio.h>
int main(){
	printf("Enter the element in matrix  :\n");
	int a[3][3],count=0,cnt=0,mid;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",a[i][j]);			
		}
		printf("\n");
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
	int z=mid-cnt+1;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]!=0){
				a[i][j]=0;
				z--;
				if(z==0){
					break;
				}
			}
		}
			if(z==0){
				break;
			}
	}
	printf("The matrix after the conversion to sparse matrix:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",a[i][j]);			
		}
		printf("\n");
	}
	
	return 0;
}
