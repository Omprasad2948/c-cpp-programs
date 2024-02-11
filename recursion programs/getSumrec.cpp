#include<stdio.h>
int sum=0;
int getSum(int a[],int size){
	if(size>=0){
		
		sum=sum+a[size];
	    getSum(a,size-1);
	}
	else{
		return sum;
	}
}

int main(){
	
	int size,i,result;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter the array elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	
	
	result=getSum(a,size-1);
	printf("The sum is %d",result);
	
}
