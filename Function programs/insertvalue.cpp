#include<stdio.h>






int main()
{
	
	int size,i;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter the elements in the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
		int index, value;
				printf("Enter the index.\n");
				scanf("%d",&index); // 2
				
				printf("Enter the value.\n");
				scanf("%d",&value); // 100
				
				for(i=size;i>index;i--)  // i=5  5>2
				{
					
					
					a[i]=a[i-1];
				}
				
				for(i=0;i<=size;i++){
					if(i==index){
						a[i]=value;
					}
					printf("%d",a[i]);
				}
				
				return 0;
}
