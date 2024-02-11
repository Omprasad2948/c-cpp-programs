#include<stdio.h>
#include<stdlib.h>
int getSum(int ptr[]){
	int sum=0;
	for(int i=0;i<5;i++){
		printf("%d\t",*(ptr+i));
		sum=sum+*(ptr+i);
	}
	printf("\nThe sum is %d",sum);
}
int main(){
	
	int size,*ptr,i;
	printf("Enter the size :\n");
	scanf("%d",&size);
	
	ptr=(int*)malloc(sizeof(size));
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	
	getSum(ptr);
	
	return 0;
}
