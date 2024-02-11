#include<stdio.h>
#include<conio.h>
int main(){
	int a[5],i,len;
	printf("Enter the element in array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe arrays is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe even element in array is :\n");
	for(i=0;i<len;i++)
  {
	if(a[i]%2==0)
	{
			printf("%d\t",a[i]);
	}
  }
  	printf("\nThe odd element in array is :\n");
	for(i=0;i<len;i++)
  {
	if(a[i]%2!=0)
	{
			printf("%d\t",a[i]);
	}
  }

	return 0;

}

