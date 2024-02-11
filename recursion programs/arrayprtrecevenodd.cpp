#include<stdio.h>
int i=0;
//Array printing usig recursion.
void arrayprtreceven(int a[],int size)  //Function Defination
{
	if(i<size){
		if(a[i]%2==0)
		{
			printf("%d\t",a[i]);
		}
		i++;
		arrayprtreceven(a,size);
	}
	
}
 
void arrayprtrecodd(int a[],int size)  //Function Defination
{
	static int i=0;
	if(i<size){
		if(a[i]%2!=0)
		{
			printf("%d\t",a[i]);
		}
		i++;
		arrayprtrecodd(a,size);
	}
	
}
int main(){
	 int i,size;
	 printf("Enter the size:\n");
	 scanf("%d",&size);
	int a[size];
	printf("The array is:\n");
	for(i=0;i<size;i++)
	{
		 scanf("%d",&a[i]);
		 
	} 
	printf("\nThe even numbers are :\n");
	arrayprtreceven(a,size);
	printf("\nThe odd numbers are :\n");
	arrayprtrecodd(a,size);
	
	
	return 0;
}
