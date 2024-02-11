#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int size,i,*ptr,j,count,max=1,a;
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
	printf("\nThe max repeating element is:\n");
	for(i=0;i<size;i++){
		count=1;
		for(j=(i+1);j<size;j++){
			if(*(ptr+i)==*(ptr+j)){
				count++;
			}
			if(count>max){
				max=count;
				a=*(ptr+i);
			}
		}
	}
	printf("\n%d at %d time",a,max);
	return 0;
	
}
