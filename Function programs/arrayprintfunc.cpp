#include<stdio.h>
int getmaxarray(int a[])
{
    int max=a[0];
    printf("\nThe array element is:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int main()
{
	
	//int getmaxarray(int); //Array Declaration
	int size,i,result;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the array elements :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	result=getmaxarray(a);
	printf("\n\nThe max is result %d",result);
	return 0;
}

