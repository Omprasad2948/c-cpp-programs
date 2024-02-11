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
	printf("The value in array is :\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	
	
	return 0;
}
