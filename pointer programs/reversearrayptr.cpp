#include<stdio.h>
#include<conio.h>
int main(){
	
	int size,*ptr,i,mid,end,temp;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	int a[size];
	ptr=a;
	printf("\nEnter the element in the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	printf("\nThe element in the array :\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	mid=size/2;
	end=size-1;
	for(i=0;i<mid;i++){
		temp=*(ptr+i);
		*(ptr+i)=*(ptr+end);
		*(ptr+end)=temp;
		end--;
	}
	printf("\nThe value after the reverse is:\n");
		for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	return 0;
}
