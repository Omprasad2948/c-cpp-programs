#include<stdio.h>
#include<conio.h>
int main()
{
	int *ptr,a[5];
	
	ptr=a;

	printf("Enter the array element :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}
	printf("The even number in array is :\n");
	for(int i=0;i<5;i++)
	{
		if(*(ptr+i)%2==0){
			printf("%d\t",*(ptr+i));
		}
	}
	printf("\nThe odd number in array is :\n");
	for(int i=0;i<5;i++)
	{
		if(*(ptr+i)%2!=0){
			printf("%d\t",*(ptr+i));
		}
	}
	
	
	return 0;
}
