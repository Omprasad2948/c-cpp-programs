#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
 int n=5;
 printf("Enter  the number :\n");
 scanf("%d",&n);
 int start=0;
 int size=2*n-1;
 int i,j;
 int end=size-1;
 int a[size][size];
 while(n!=0){
 for(i=start;i<=end;i++){
 	for(j=start;j<=end;j++){
 		if(i==start||i==end||j==start||j==end){
 			a[i][j]=n;
		 }
	 }
 }
  ++start;
	 --end;
	 --n;
	
}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
 
    return 0;
}
