#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int i,*ptr,size,j,count;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	
	printf("Enter the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	
	printf("The array is :\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	
	//printf("\nThe index numbers where sum=15 :\n");
	printf("\nThe array after sorting is :\n");
	for(i=0;i<size;i++){
		for(j=(i+1);j<size;j++){
			if(*(ptr+i)>*(ptr+j)){
			int temp=*(ptr+i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=temp;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	count=1;
	for(i=0;i<size;i++){
			
			if(*(ptr+i)==*(ptr+i+1)) 
			   {
				count++;
		    	}
			else{
				printf("\n%d occur %d times\n",*(ptr+i),count);
				count=1;
				}
			

			}
		
		
	
	

	
	
	
	
	
	return 0;
}
