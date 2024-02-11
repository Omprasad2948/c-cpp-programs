#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int size,*ptr,i,temp,max,dif,a,b;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));
	printf("\nEnter the element in the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	printf("\nEnter the element in the array :\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	
//	printf("\nAll inversions are :\n");
	max=*ptr;
	for(i=1;i<size-2;i++){
		for(int j=i+1;j<size;j++){
			dif=*(ptr+i)-*(ptr+j);
			if(dif<0){
				dif*=-1;
			}
			if(dif>max){
				max=dif;
				a=*(ptr+i);
				b=*(ptr+j);
			}
			}
		}
	printf("\nThe max diff is %d and num is %d and %d ",max,a,b);
	
	return 0;
}
