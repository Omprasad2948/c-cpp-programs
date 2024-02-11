#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int size,i,*ptr,j,dif;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	ptr=(int *)malloc(sizeof(size));
	
	printf("Enter the element in the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	} 
	
	printf("The array is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	printf("\nThe elements where the sum is 5:\n");
	for(i=0;i<size;i++){
		for(j=(i+1);j<size;j++){
			dif=*(ptr+i)-*(ptr+j);
			if(dif<0){
				dif=-1*dif;
			}
			if(dif==53){
				printf("\n%d %d",*(ptr+i),*(ptr+j));
			}
		}
	}
	return 0;
	
}
