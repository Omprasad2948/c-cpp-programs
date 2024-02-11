#include<stdio.h>
#include<conio.h>
int main(){
	
	int size,*ptr,i,j,count=0;
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
    
    for(i=0;i<size;i++){
    
    	for(j=2;j<(*(ptr+i)/2);j++)
		{
    		if((*(ptr+i)%j!=0) ||(*(ptr+i)==2))
			{
    			count++;
    			
			}
		}
		
	}
	printf("\nThe prime number in array is %d",count);
	return 0;
}
