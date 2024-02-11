#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int i,j,*ptr,temp,size,min,sum=0,a,b;
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	printf("Enter the array elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	
	printf("\nThe array is:\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	min=*ptr;
	for(i=0;i<size;i++){
		sum=*(ptr+i);
		for(j=(i+1);j<size;j++){
			sum+=*(ptr+j);
			if(sum<0){
				sum*=-1;
			}
			if(min>sum){
				min=sum;
				a=*(ptr+i);
				b=*(ptr+j);
			}
			sum=*(ptr+i);
			}
		}
		printf("\nThe sum of %d and %d  clasest to zero Min value is %d",a,b,min);
	
	
	
	
	return 0;
}
