#include<stdio.h>
#include<conio.h>
int main()
{
	int *ptr,a[5],b[5],*ptr1;
	
	ptr=a;
	ptr1=b;
	printf("Enter the array element :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		*(ptr1+i)=*(ptr+i);
	}
	printf("The value of 2nd array is :\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\n",*(ptr1+i));
	}
	
	
	return 0;
}
