#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int i,start,*ptr,end,size ,choice;
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
	
while(1){
	printf("\n\n1 for continue 0 for stop\n");
	scanf("%d",&choice);
	if(choice==0){
		break;
	}
	printf("\nEnter the starting index and index:\n");
	scanf("%d %d",&start,&end);

	for(i=start;i<=end;i++){
		printf("%d\t",*(ptr+i));
	}
	
	
	
}
	
	return 0;
}
