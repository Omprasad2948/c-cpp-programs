#include<stdio.h>
#include<conio.h>
int main()
{
	int *ptr,a[5],sum=0;
	
	ptr=a;
	
	printf("Enter the array element :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}
	printf("The value of 2nd array is :\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
		sum=sum+*(ptr+i);
		
	}
	printf("\nsum=%d",sum);
	
	
	return 0;
}
